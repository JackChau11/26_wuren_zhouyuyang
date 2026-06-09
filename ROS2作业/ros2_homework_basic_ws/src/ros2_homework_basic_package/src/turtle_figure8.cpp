#include <chrono>
#include <cmath>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

//定义一个TurtleFigure8Node类，继承自Node
class TurtleFigure8Node : public rclcpp::Node
{
public:
  //构造函数，将i节点命名为turtle_figure8
  TurtleFigure8Node() : Node("turtle_figure8")
  {
    //声明参数，并初始化它们的值
    this->declare_parameter<double>("linear_speed", 1.0);//线速度
    this->declare_parameter<double>("angular_speed", 1.0);//角速度
    this->declare_parameter<int>("publish_rate", 50);//发布频率

    //将参数赋值给这个类的u内部参数，转换为对应类型
    v_ = this->get_parameter("linear_speed").as_double();
    w_ = this->get_parameter("angular_speed").as_double();
    int rate = this->get_parameter("publish_rate").as_int();

    //计算画一个完整的圆需要的时间(T=2pi/角速度)
    circle_time_ = 2.0 * M_PI / w_;
    dt_ = 1.0 / rate;  //dt_是时间间隔

    // 创建发布者，turtlesim会监听/turtle1/cmd_vel这个话题(仅有一只海龟的前提下)
    //“geometry_msgs::msg::Twist”是头文件中定义的速度消息，10是缓存消息的数量
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);

    //为避免使用死循环，创建定时器，按指定频率触发 timer_callback
    timer_ = this->create_wall_timer(
      //设置频率
      std::chrono::milliseconds(1000 / rate),
      //用bind把当前对象和timer_callback绑定
      std::bind(&TurtleFigure8Node::timer_callback, this));
  }

private:
  void timer_callback()
  {
    // 根据当前程序运行的相对时间决定是左转还是右转

    //新建一个空的速度，根据后面的条件判断决定方向
    auto msg = geometry_msgs::msg::Twist();
    msg.linear.x = v_;  // 线速度上保持匀速

    if (t_ < circle_time_) {
      msg.angular.z = w_;   //前T秒左转，画第一个圆
    } else {
      msg.angular.z = -w_;  //后T秒右转，画第二个圆
    }

    //将速度消息发布出去
    publisher_->publish(msg);

    //时间累加
    t_ += dt_;

    // 如果两个圆都画完了 (经过了 2T 时间)，时间清零，重新开始
    if (t_ >= 2.0 * circle_time_) {
      t_ = 0.0;
    }
  }

  //成员变量
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;//指向发布者的shared_ptr
  rclcpp::TimerBase::SharedPtr timer_;//指向计时器的shared_ptr
  
  double v_, w_;//线速度，角速度
  double circle_time_;//运动周期时间
  double dt_;//发布时间间隔
  double t_ = 0.0;  // 记录当前经过的时间
};

//主程序
int main(int argc, char ** argv)
{
  //初始化
  rclcpp::init(argc, argv);

  //spin()函数,让节点保持运行，不用手动写循环
  rclcpp::spin(std::make_shared<TurtleFigure8Node>());

  //关闭节点，释放资源
  rclcpp::shutdown();
  return 0;

  //注意，在main()函数中不是从上到下按顺序执行完就结束，而是进入spin()循环，通过计时器和回调函数来控制执行
}
