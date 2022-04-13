cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(Tutorial)

add_subdirectory(lib)

# add the executable
add_executable(TestApp testapp.cpp)

target_link_libraries(TestApp PUBLIC TestLib)
