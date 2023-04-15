cmake_minimum_required(VERSION 3.25)
project(ex0 C)

set(CMAKE_C_STANDARD 11)

include_directories(part2)

add_executable(ex0
        part2/mtm_buggy.c)
