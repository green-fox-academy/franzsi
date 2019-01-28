cmake_minimum_required(VERSION 3.12)
project(OpenCV_Workshop_01)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
find_package(OpenCV REQUIRED)

add_executable(OpenCV_Workshop_01 main.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCV_Workshop_01 ${OpenCV_LIBS})