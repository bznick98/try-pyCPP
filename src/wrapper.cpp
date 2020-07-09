// wrapper.cpp
#include <pybind11/pybind11.h>
#include "add.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pyCPP, m){
    m.doc() = "This is a simple py+cpp code combine using pybind11.";
    m.def("add", &add, "OPTIONAL DOCSTRING HERE");
}