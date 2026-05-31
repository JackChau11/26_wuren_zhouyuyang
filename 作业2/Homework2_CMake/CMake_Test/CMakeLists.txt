#顶层CMakeLists
#main.cpp 包含了M1.h M2.h math.h
cmake_minimum_required(VERSION 3.10)#指定版本

project(Test VERSION 1.0)#项目名设置为Test

set(CMAKE_CXX_STANDARD 14)#指定C++17(KalmanFilterX.hpp需要14以上的特性)
#查找包，使用find_package(包名)
find_package(OpenCV REQUIRED)
#添加子目录，使用add_subdirectory()
add_subdirectory(common/math)
add_subdirectory(common/kalman)
add_subdirectory(modules/M1)
add_subdirectory(modules/M2)
add_subdirectory(modules/A1)
add_subdirectory(modules/A2)
#指定源文件创建可执行文件，使用add_executable()
add_executable(Test ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
#添加头文件目录，使用target_include_directories()
target_include_directories(Test PRIVATE ${OpenCV_INCLUDE_DIRS})
#添加库文件，使用target_link_libraries()
target_link_libraries(Test PRIVATE M1 M2 math)