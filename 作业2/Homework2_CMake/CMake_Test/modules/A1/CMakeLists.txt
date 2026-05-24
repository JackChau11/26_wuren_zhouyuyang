#A1 CMakeLists
#A1.h没有include其他项，包含A11.cpp A12.cpp A13.cpp三个源文件
aux_source_directory(src PATH_A1)

add_library(A1 STATIC ${PATH_A1})

target_include_directories(A1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
