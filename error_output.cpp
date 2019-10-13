// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program gives more output whenever their is wrong input

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // variables
    std::string guess;
    int random_number;
    int integer_as_int;

    // random number generator
    srand(time(0));  // seed random number generator
    random_number = rand() % 10 + 1;

    // input
    std::cout << "Can you guess the number the computer chose from 0 to 10? ";
    std::cin >> guess;

    // process
    try {
        integer_as_int = std::stoi(guess);
        if (random_number == integer_as_int) {
            // output
            std::cout << "You guessed it :)";
    } else {
        std::cout << "The correct number was: " << random_number << std::endl;
        }
    }
     catch (std::invalid_argument) {
        std::cout << "This was not a valid entry";
    }
    // Default message
    std::cout << "Thank you for playing!" << std::endl;
}
