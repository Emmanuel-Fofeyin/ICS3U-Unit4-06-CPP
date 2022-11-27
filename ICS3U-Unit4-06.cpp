// Copyright (c) 2022 Emmanuel Fofeyin
//
// Created by: Emmanuel Fofeyin
// Created on: Nov 2022
// This program uses nested loops to find every RGB value

#include <iostream>

int main() {
    // This function finds every valid RGB

    int rgb1;
    int rgb2;
    int rgb3;

    // Process and Output
    for (rgb1 = 0; rgb1 < 256; rgb1++) {
        for (rgb2 = 0; rgb2 < 256; rgb2++) {
            for (rgb3 = 0; rgb3 < 256; rgb3++) {
                std::cout << "RGB(" << rgb1 << ","
                          << rgb2 << "," << rgb3 << ")" << std::endl;
            }
        }
    }

    std::cout << "\nDone" << std::endl;
}
