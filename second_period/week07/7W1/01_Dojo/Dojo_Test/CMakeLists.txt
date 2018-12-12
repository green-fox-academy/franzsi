add_compile_definitions(WINVER=0x0500)

set(PATH_TO_GOOGLETEST "C:/Users/franzsi/Documents/_Greenfox/install/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(Dojo_Test Dojo_Test.cpp)
target_link_libraries(Dojo_Test gtest gtest_main)
target_link_libraries(Dojo_Test Dojo)