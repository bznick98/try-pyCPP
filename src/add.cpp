// add.cpp
#include <iostream>
#include "add.hpp"

using std::cout;

int add(int a, int b){
    int result = a + b;
    cout << "=== C++ Add(" << a << "," << b << ") -> " << result << " ===\n";
    return result;
}