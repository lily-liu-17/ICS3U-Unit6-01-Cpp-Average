// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program finds the averae of 10 random numbers

#include <iostream>
#include <random>

int main() {
    // This program finds the averae of 10 random numbers
    int random;
    float average = 0;
    int numberList[10];

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);


    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        random = idist(rgen);
        numberList[loopCounter] = random;
        average += random;
        std::cout << "The random number is : " << random << std::endl;
    }

    average = average/ (sizeof(numberList) / sizeof(numberList[0]));
    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;

    std::cout << "\nDone." << std::endl;
}
