cmake_minimum_required(VERSION 3.12)
project(4W2)

set(CMAKE_CXX_STANDARD 14)

add_executable(4W2 main.cpp Person.cpp Person.h Student.cpp Student.h Mentor.cpp Mentor.h Cohort.cpp Cohort.h Sponsor.cpp Sponsor.h)