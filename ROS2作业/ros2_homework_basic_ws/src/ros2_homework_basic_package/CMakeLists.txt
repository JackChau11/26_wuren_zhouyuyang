cmake_minimum_required(VERSION 3.8)
project(ros2_homework_basic_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)

# 编译 C++ 节点
add_executable(turtle_figure8 src/turtle_figure8.cpp)
ament_target_dependencies(turtle_figure8 rclcpp geometry_msgs turtlesim)

# 安装可执行文件
install(TARGETS turtle_figure8
  DESTINATION lib/${PROJECT_NAME})

# 安装 launch 和 config 文件夹
install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME})

ament_package()
