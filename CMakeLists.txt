cmake_minimum_required(VERSION 3.21)
project(untitled C)
set(CMAKE_C_STANDARD 99)

add_executable(untitled src/main.c)
add_library(bin STATIC lib/int.h lib/arrays.h)
add_library(works STATIC lib/works/merge.h)

set_target_properties(bin PROPERTIES LINKER_LANGUAGE C)
set_target_properties(works PROPERTIES LINKER_LANGUAGE C)
