cmake_minimum_required(VERSION 3.11)
project(Password_Generator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Password_Generator
        Main.cpp
        Password.cpp
        Password.hpp)
