cmake_minimum_required(VERSION 3.23)

project(DataStructuresAlgorithms)

# Require C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Recursively find all .cpp files inside the src folder and its subdirectories
file(GLOB_RECURSE SRC_FILES "src/*.cpp")

# Create the executable named 'FunApp' bundling all found source files
add_executable(FunApp ${SRC_FILES})