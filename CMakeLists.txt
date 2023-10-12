# CMakeList.txt : CMake project for PA2, include source and define


# Add source to this project's executable.
add_executable (PA2 "main.cpp"  "AVLNode.h" "AVLTree.h" "AVLTree.tpp")

cmake_minimum_required(VERSION 3.12)
project(AVLTreeProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

# target_compile_features(main PRIVATE cxx_range_for)

# Include header files and source files
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

