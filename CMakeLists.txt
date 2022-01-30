cmake_minimum_required(VERSION 3.20)
project(glib)
set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_library(GeometryLib
        src/point2.cpp
        src/line2.cpp
        include/geometry.h
        include/point2.h
        include/line2.h
        src/circle2.cpp include/circle2.h)

add_executable(TestApp
        tests/geometrytest.cpp)

target_include_directories(GeometryLib PUBLIC include)
target_link_libraries(TestApp GeometryLib)

