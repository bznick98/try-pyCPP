cmake_minimum_required(VERSION 3.5)

project(sample_pyCPP VERSION 0.0.1)

# set source directory
set(SOURCE_DIR "src")

# c++11
set(PYBIND11_CPP_STANDARD -std=c++11)

# add pybind11
add_subdirectory(lib/pybind11)

# pybind11 add module
pybind11_add_module(pyCPP src/add.cpp src/wrapper.cpp)