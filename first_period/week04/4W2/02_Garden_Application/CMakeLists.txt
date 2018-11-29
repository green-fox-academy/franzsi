cmake_minimum_required(VERSION 3.12)
project(02_Garden_Application)

set(CMAKE_CXX_STANDARD 14)

add_executable(02_Garden_Application main.cpp Plant.cpp Plant.h Tree.cpp Tree.h Flower.cpp Flower.h Garden.cpp Garden.h)