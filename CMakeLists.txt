cmake_minimum_required(VERSION 3.10)
project(Peano_Arithmetic)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable target using the source in src/main.cpp
add_executable(main src/main.cpp)
add_executable(practice practice/practice.cpp)