cmake_minimum_required(VERSION 3.13)
project(rectangles)

set(CMAKE_CXX_STANDARD 11)

add_executable(rectangles create_dataset.cc rectangle_search.cc)