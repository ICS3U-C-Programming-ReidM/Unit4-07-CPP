// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program prints integers from 1000 to 2000
// Outputting five integers per line, separated by a space

#include <iostream>

int main() {
    // Input: set start and end numbers
    int start = 1000;
    int end = 2000;

    // Process + Output: loop through numbers and print them
    for (int number = start; number <= end; number++) {
        std::cout << number << " ";  // Print number and space
        if ((number - 999) % 5 == 0) {
            std::cout << std::endl;  // Print newline after every 5 numbers
        }
    }

    return 0;
}
