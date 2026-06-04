cmake_minimum_required(VERSION 3.10)
project(SVM_Iris VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Test Test.cpp IrisPrediction.cpp svm.cpp)

#复制 iris.csv 到构建目录
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/iris.csv ${CMAKE_CURRENT_BINARY_DIR}/iris.csv COPYONLY)

add_custom_target(run
    COMMAND example
    DEPENDS example
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running SVM Iris classifier..."
)

