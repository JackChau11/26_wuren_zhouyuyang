#M1 CMakeLists
#M1.h包含了A1.h
aux_source_directory(src Path_M1)

add_library(M1 STATIC ${Path_M1})

target_include_directories(M1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(M1 PUBLIC A1)