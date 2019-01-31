cmake_minimum_required(VERSION 3.12)
project(Image_Loading)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
set(SQLITE3_DIR "C:\\Program Files (x86)\\sqlite3\\lib\\cmake")
find_package(OpenCV REQUIRED)
find_package(SQLITE3)


add_executable(Image_Loading main.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("C:\\Program Files (x86)\\sqlite3\\include\\sqlite3")
target_link_libraries(Image_Loading ${OpenCV_LIBS} sqlite3::sqlite3)
