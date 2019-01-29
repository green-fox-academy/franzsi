cmake_minimum_required(VERSION 3.12)
project(Image_Loading)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
find_package(OpenCV REQUIRED)


add_executable(Image_Loading main.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(Image_Loading ${OpenCV_LIBS})
