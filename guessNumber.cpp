// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on March 2022
// Allows user to guess number

#include <iostream>

int main() {
    // I check if the user guessed correctly
    const int CHOSEN_NUMBER = 7;
    int guess;

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> guess;

    // process
    if (guess == CHOSEN_NUMBER) {
        // output
        std::cout << "You got it!";
    }
    if (guess != CHOSEN_NUMBER) {
        // output
        std::cout << "Maybe next time!";
    }
}
