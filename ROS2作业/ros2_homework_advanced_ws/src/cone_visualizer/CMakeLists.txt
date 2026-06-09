cmake_minimum_required(VERSION 3.8)
project(cone_visualizer)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

#查找所需的依赖包
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(fsd_common_msgs REQUIRED)
find_package(std_msgs REQUIRED)

#创建可执行文件 cone_visualizer_node
add_executable(cone_visualizer_node src/cone_visualizer_node.cpp)

#为目标链接依赖包
ament_target_dependencies(cone_visualizer_node
  rclcpp
  visualization_msgs
  fsd_common_msgs
  std_msgs
)

#安装可执行文件到目标目录
install(TARGETS
  cone_visualizer_node
  DESTINATION lib/${PROJECT_NAME}
)

# 启动ament打包
ament_package()