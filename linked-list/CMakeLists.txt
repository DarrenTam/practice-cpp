cmake_minimum_required(VERSION 3.17)
project(linked-list)

set(CMAKE_CXX_STANDARD 20)

add_executable(linked-list main.cpp linked_list.cpp linked_list.h node.cpp node.h)
