// Copyright 2024 Hyundai America Technical Center, Inc.

#include <iostream>
#include "../include/mymath.h"

int main(int, char**) {
    int val = 9;
    std::cout << "Square root of " << val << " is " << sqrt(val) << std::endl;
    std::cout << "Factorial of " << val << " is " << fact(val) << std::endl;
}
