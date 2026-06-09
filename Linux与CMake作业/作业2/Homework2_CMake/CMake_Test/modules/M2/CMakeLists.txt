#M2 CMakeLists
#M2.h包含了KalmanFilterX.hpp A1.h A2.h，KalmanFilterX.hpp又需要OpenCV库
find_package(OpenCV REQUIRED)

add_library(M2 STATIC src/M2.cpp)

target_include_directories(M2 PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/include ${kalman_INCLUDE_DIRS})

target_link_libraries(M2 PUBLIC A1 A2)