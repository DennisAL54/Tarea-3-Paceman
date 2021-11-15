cmake_minimum_required(VERSION 3.20)
project(Server C)

set(CMAKE_C_STANDARD 99)

add_executable(Server main.c)

if(WIN32)
    target_link_libraries(Server wsock32 ws2_32)
endif()
