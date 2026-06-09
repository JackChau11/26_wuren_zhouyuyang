cmake_minimum_required(VERSION 3.10)
project(AStarPathfinder LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(test
    test.cpp
    MyAStar.cpp
    PrintGrid.cpp
)
