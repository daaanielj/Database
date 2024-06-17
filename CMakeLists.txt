cmake_minimum_required(VERSION 3.10)
project(Database)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(database
    src/main.cpp
    src/InputBuffer.cpp
)

