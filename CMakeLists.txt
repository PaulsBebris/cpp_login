cmake_minimum_required(VERSION 3.25)
project(login)

set(CMAKE_CXX_STANDARD 17)

add_executable(login main.cpp src/classes/LoginInput.cpp src/classes/LoginInput.h)
