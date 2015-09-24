cmake_minimum_required(VERSION 2.8)
project(Assign3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#line to get Assign3.cpp from base dir instead of src
#set(SOURCES ${SOURCES} Assign3.cpp)

add_executable(Assign3 ${SOURCES})
