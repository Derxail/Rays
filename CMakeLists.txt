cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_COMPILER_REQUIRED True)
project(rays LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories("include/")
set(SOURCES main.cpp src/utils.cpp src/vec.cpp src/ray.cpp src/scene.cpp src/viewport.cpp)
add_executable(main ${SOURCES})