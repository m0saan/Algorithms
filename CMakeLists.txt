cmake_minimum_required(VERSION 3.17)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

add_executable(Algorithms main.cpp Tests/tests.cpp)

target_link_libraries(Algorithms gtest gtest_main)
