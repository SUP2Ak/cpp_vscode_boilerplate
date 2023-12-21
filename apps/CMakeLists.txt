# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.27.1)

project(main)

add_executable(main main.cpp)
# We need test.h and the hello library
target_link_libraries(main
    PRIVATE project)

# Tell C++ compiler to use C++20 features. We don't actually use any of them.
target_compile_features(main PUBLIC cxx_std_20)