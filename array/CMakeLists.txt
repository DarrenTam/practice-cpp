cmake_minimum_required(VERSION 3.17)
project(array)
set(CMAKE_CXX_STANDARD 20)
add_executable(array main.cpp vector_unittest.cpp vector.cpp vector.h)
