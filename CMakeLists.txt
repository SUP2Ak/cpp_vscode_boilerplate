# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.27.1)

project(
    VscodeCmakeMain
    VERSION 0.1
    DESCRIPTION "Small CMake example built with VSCode"
)

add_subdirectory(project)   # look in hello subdirectory for CMakeLists.txt to process
add_subdirectory(apps)    # look in apps subdirectory for CMakeLists.txt to process