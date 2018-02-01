cmake_minimum_required(VERSION 3.8)
project(auds)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp include/AUDS.h)
add_executable(auds ${SOURCE_FILES})