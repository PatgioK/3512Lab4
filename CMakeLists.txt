cmake_minimum_required(VERSION 3.12)
project(3512Lab4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
add_executable(3512Lab4 main.cpp inheritance.cpp animal.cpp animal.hpp)