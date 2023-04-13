cmake_minimum_required(VERSION 3.25)
project(ex0 C)

set(CMAKE_C_STANDARD 11)

include_directories(part1)

add_executable(ex0
        part1/part1.c
        part1/ReadWrite.c
        part1/Suspend.c)
