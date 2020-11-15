cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 17)
project(cpp-coding-standard)

include_directories(.)

add_compile_options(-O1 -g -Wall -Wextra -Wpedantic -Wnull-dereference -Wnon-virtual-dtor)

add_executable(coding-standard
        western/cowboy.cpp
        western/cowboy.hpp
        main.cpp)
