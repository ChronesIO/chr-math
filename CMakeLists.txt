cmake_minimum_required(VERSION 3.18.3)
project(chr-math)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(chr-math src/chr-math)
set_target_properties(chr-math PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(chr-math PUBLIC src/)

add_subdirectory(src)