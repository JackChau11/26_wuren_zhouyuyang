#math CMakeLists
#math.h中include了opencv2/core.hpp
find_package(OpenCV REQUIRED)
#使用aux_source_directory()查找目录中所有源文件，保存在一个变量中
aux_source_directory(src PATH_math)
#使用指定的源文件向项目中添加库，STATIC表示静态库,使用PATH_math无需手动指定路径和文件名
add_library(math STATIC ${PATH_math})

target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_directories(math PRIVATE ${OpenCV_LIBS})
target_link_libraries(math PRIVATE ${OpenCV_LIBS})