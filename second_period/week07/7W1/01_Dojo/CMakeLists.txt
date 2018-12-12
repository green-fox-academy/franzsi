cmake_minimum_required(VERSION 3.12)
project(7W1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dojo_run main.cpp)

include_directories(Dojo)
add_subdirectory(Dojo)
add_subdirectory(Dojo_Test)

target_link_libraries(Dojo_run Dojo)

