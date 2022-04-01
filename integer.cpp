// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: March 31, 2022
// This program determines if a number is positive
// negative or zero


#include <iostream>
#include <random>


int main() {
    // declare variables
    float input;

    std::cout << "Enter a number: ";
    std::cin >> input;

    if (input > 0) {
        std::cout << input << " is positive";
    } else if (input < 0) {
        std::cout << input << " is negative";
    } else {
        std::cout << "It must be zero";
    }
}
