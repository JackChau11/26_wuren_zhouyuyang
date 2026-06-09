cmake_minimum_required(VERSION 3.10)
project(MyOsqpDemo)

set(CMAKE_CXX_STANDARD 17)

# 查找 Eigen3
find_package(Eigen3 REQUIRED)

# 查找 osqp-eigen（需确保 osqp 和 osqp-eigen 都可被 CMake 找到）
find_package(OsqpEigen REQUIRED)

add_executable(demo Q3.cpp)

# 链接 osqp-eigen 和 Eigen3
target_link_libraries(demo OsqpEigen::OsqpEigen Eigen3::Eigen)
