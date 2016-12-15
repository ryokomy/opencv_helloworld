project(opencv-helloworld)

cmake_minimum_required(VERSION 3.0.2 FATAL_ERROR)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_CXX_FLAHS "${CMAKE_CXX_FLAGS} -march=native")
set (CMAKE_BUILD_TYPE Debug)

find_package (OpenCV REQUIRED)
#find_package (OpenCV 3.0 REQUIRED)

add_executable(opencv_helloworld src/opencv_helloworld.cpp)
target_link_libraries(opencv_helloworld ${OpenCV_LIBS})