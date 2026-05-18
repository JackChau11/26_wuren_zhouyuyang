#A2 CMakeLists
#不使用aux_source_directory,则需直接在add_library()中手动指明源文件路径和文件名
add_library(A2 src/A2.cpp) 
#${CMAKE_CURRENT_SOURCE_DIR}表示当前目录
target_include_directories(A2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
