cmake_minimum_required(VERSION 3.19)
project(des64b C)

set(CMAKE_C_STANDARD 11)

add_executable(des64b main.c des.h des.c)