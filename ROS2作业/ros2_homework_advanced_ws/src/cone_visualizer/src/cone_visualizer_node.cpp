#include <chrono>
#include <memory>
#include <vector>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "visualization_msgs/msg/marker_array.hpp"
#include "fsd_common_msgs/msg/map.hpp"
#include "fsd_common_msgs/msg/cone.hpp"
#include "std_msgs/msg/color_rgba.hpp"

using namespace std::chrono_literals;

class ConeVisualizer : public rclcpp::Node
{
public:
    ConeVisualizer() : Node("cone_visualizer")
    {
        // 创建 Marker 发布器，话题名可以根据需要修改
        //这里话题名改为cone_maker
        marker_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
            "cone_markers", 10);

        // 2. 订阅 /estimation/slam/map 话题
        map_sub_ = this->create_subscription<fsd_common_msgs::msg::Map>(
            "/estimation/slam/map", 10,
            std::bind(&ConeVisualizer::mapCallback, this, std::placeholders::_1));

        //定时发布器这里不太会用，create_wall_timer报错函数签名不匹配，干脆注释掉，好像对结果也没有很大影响
        //直接在后面marker.lifetime中调整
        // // 定时发布，避免 rviz 里只显示一瞬间
		// timer_ = this->create_wall_timer(500ms, std::bind(&
        //     MarkerPublisher::publishMarker, this));
    }

private:
    // 回调函数：处理接收到的 Map 消息
    void mapCallback(const fsd_common_msgs::msg::Map::SharedPtr msg)
    {
        visualization_msgs::msg::MarkerArray marker_array;

        //清除上一帧的所有 marker
        visualization_msgs::msg::Marker delete_all;
        delete_all.action = visualization_msgs::msg::Marker::DELETEALL;
        marker_array.markers.push_back(delete_all);

        //获取坐标系 (解决 README 中提到的坐标系问题)
        // 1. 设置坐标系，必须和 rviz 的 Fixed Frame 对应
        std::string frame_id = msg->header.frame_id;
		if (frame_id.empty()) {
            //先判断是否为空，避免出错
            frame_id = "map"; 
        }
		// 2. 设置命名空间和 ID，用于区分不同 Marker
        std::string current_name = "basic_shapes";
        int current_id = 0; 

        //分别处理 4 种颜色的锥桶数组
        current_id = addConesToMarkerArray(msg->cone_blue, frame_id, current_id, 0.0f, 0.0f, 1.0f, marker_array); //蓝色
        current_id = addConesToMarkerArray(msg->cone_red, frame_id, current_id, 1.0f, 0.0f, 0.0f, marker_array); //红色
        current_id = addConesToMarkerArray(msg->cone_yellow, frame_id, current_id, 1.0f, 1.0f, 0.0f, marker_array); //黄色
        current_id = addConesToMarkerArray(msg->cone_unknown, frame_id, current_id,0.7f, 0.7f, 0.7f, marker_array); //未知

        //锥桶的尺寸、位姿等参数，在后面的addConesToMarkerArray()函数里设置，这里先跳过3-8步

		// 9. 发布 Marker
        marker_pub_->publish(marker_array);

        //让终端输出一下信息，方便后面找bug
        RCLCPP_INFO_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
            "收到地图数据 - 蓝:%zu, 红:%zu, 黄:%zu, 未知:%zu | 坐标系: %s",
            msg->cone_blue.size(), msg->cone_red.size(), 
            msg->cone_yellow.size(), msg->cone_unknown.size(), frame_id.c_str());
    }

    
    //辅助函数：将特定颜色的锥桶数组转换为Marker并加入MarkerArray
    int addConesToMarkerArray(const std::vector<fsd_common_msgs::msg::Cone>& cones,
                              const std::string& frame_id,
                              int start_id,
                              float r, float g, float b,
                              visualization_msgs::msg::MarkerArray& marker_array)
    {
        int next_id = start_id;
        
        for (const auto& cone : cones)
        {
            visualization_msgs::msg::Marker marker;
		    // 1. 设置坐标系，必须和 rviz 的 Fixed Frame 对应
            marker.header.frame_id = frame_id;
            marker.header.stamp = this->now();

            // 2. 设置命名空间和 ID，用于区分不同 Marker
            marker.id = next_id++;
            marker.ns = "cones";

            // 3. 设置类型：CUBE / SPHERE / ARROW / TEXT_VIEW_FACING / LINE_STRIP / POINTS 等
            marker.type = visualization_msgs::msg::Marker::CYLINDER; //圆柱体，好像没找到锥桶形状的

		    // 4. 设置动作：ADD 表示添加或更新，DELETE 表示删除            
            marker.action = visualization_msgs::msg::Marker::ADD;

		    // 5. 设置位姿
            marker.pose.position.x = cone.position.x;
            marker.pose.position.y = cone.position.y;
            marker.pose.position.z = cone.position.z; 
            marker.pose.orientation.x = 0.0;
            marker.pose.orientation.y = 0.0;
            marker.pose.orientation.z = 0.0;
            marker.pose.orientation.w = 1.0;

		    // 6. 设置尺寸，注意不同类型对 scale 的含义可能不同
            marker.scale.x = 0.15;  // X方向直径
            marker.scale.y = 0.15;  // Y方向直径
            marker.scale.z = 0.30;  // Z方向高度

		    // 7. 设置颜色，alpha 必须大于 0，否则无法显示
            marker.color.r = r;
            marker.color.g = g;
            marker.color.b = b;
            marker.color.a = 1.0f;  

		    // 8. 生命周期，0 表示一直显示
            marker.lifetime = rclcpp::Duration::from_seconds(0.0);

            marker_array.markers.push_back(marker);
        }
        
        //返回更新后的next_id(保证所有Marker ID全局唯一)
        return next_id;
    }
    //发布者和订阅者的智能指针
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;
    rclcpp::Subscription<fsd_common_msgs::msg::Map>::SharedPtr map_sub_;
    
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ConeVisualizer>());
    rclcpp::shutdown();
    return 0;
}
