cmake_minimum_required (VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project (Assign3)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(Assign3 ${SOURCES})
