// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 19 2022
// This program asks the user for their age
// It then tells them if they can vote or not

#include <iostream>

// declare userAgeInt as a integer
int userAgeInt, playAgainNum, countryInt;

int main() {
    // declare the constants for MIN_AGE
    // for all the countries and
    // MAX_AGE, NEGATIVE, YES,
    // CANADA, AUSTRIA and BAHRAIN
    const int MIN_AGE_CANADA = 18;
    const int MIN_AGE_AUSTRIA = 16;
    const int MIN_AGE_BAHRAIN = 20;
    const int MAX_AGE = 122;
    const int NEGATIVE = 0;
    const int YES = 1;
    const int CANADA = 1;
    const int AUSTRIA = 2;
    const int BAHRAIN = 3;
    // declare userAgeString, playAgainString,
    // and countryString as a string,
    std::string userAgeString;
    std::string playAgainString;
    std::string countryString;

    // Get the users age and which country they picked
    std::cout << "Enter 1 for Canada, 2 for Austria or 3 for Bahrain: ";
    std::cin >> countryString;
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;

    // 2 Try catches to catch if they wrote anything
    // other than a integer
    try {
        userAgeInt = std::stoi(userAgeString);
        try {
            countryInt = std::stoi(countryString);
            if (countryInt < NEGATIVE) {
                std::cout << "Please enter a positive number\n";
                std::cout <<
                "To play again type 1 otherwise type any other number: ";
                std::cin >> playAgainString;
            // An If statement to see if the user can vote in Canada
            } else if (countryInt == CANADA) {
                // If statement to see if the number
                // they entered is a negative
                if (userAgeInt < NEGATIVE) {
                    std::cout << "Please enter a positive number\n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                } else if (userAgeInt >= MIN_AGE_CANADA
                && userAgeInt <= MAX_AGE) {
                    // else if statement to see if their the users
                    // age is greater than or
                    // equal to 18 and is less
                    // than or equal to 122
                    std::cout << "You are allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                    // else statement to tell them they are
                    // not allowed to vote
                } else {
                    std::cout << "You are not allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                }
            }
            // An If statement to see if the user can vote in Austria
            if (countryInt == AUSTRIA) {
                // If statement to see if the number
                // they entered is a negative
                if (countryInt < NEGATIVE) {
                    std::cout << "Please enter a positive number\n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                } else if (userAgeInt < NEGATIVE) {
                    std::cout << "Please enter a positive number\n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                } else if (userAgeInt >= MIN_AGE_AUSTRIA
                && userAgeInt <= MAX_AGE) {
                    // else if statement to see if their the users
                    // age is greater than or
                    // equal to 16 and is less than or equal to 122
                    std::cout << "You are allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                    // else statement to tell them they are
                    // not allowed to vote
                } else {
                    std::cout << "You are not allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                }
            }
            // An If statement to see if the user can vote in Bahrain
            if (countryInt == BAHRAIN) {
                // If statement to see if the number
                // they entered is a negative
                if (countryInt < NEGATIVE) {
                    std::cout << "Please enter a positive number\n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                } else if (userAgeInt < NEGATIVE) {
                    std::cout << "Please enter a positive number\n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                } else if (userAgeInt >= MIN_AGE_BAHRAIN
                && userAgeInt <= MAX_AGE) {
                    // else if statement to see if their the users
                    // age is greater than or
                    // equal to 20 and is less than or equal to 122
                    std::cout << "You are allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                    // else statement to tell them they are
                    // not allowed to vote
                } else {
                    std::cout << "You are not allowed to vote \n";
                    std::cout <<
                    "To play again type 1 otherwise type any other number: ";
                    std::cin >> playAgainString;
                }
            }
        } catch (std::invalid_argument) {
            std::cout << "Please enter either 1, 2 or 3\n";
            std::cout <<
            "To play again type 1 otherwise type any other number: ";
            std::cin >> playAgainString;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a whole number\n";
        std::cout << "To play again type 1 otherwise type any other number: ";
        std::cin >> playAgainString;
    }

    try {
        playAgainNum = std::stoi(playAgainString);
        // If statement to see if the number
        // they entered is a negative
        if (playAgainNum == YES) {
            main();
        } else {
        // else statement to tell them they are
        // not allowed to vote
            std::cout << "Thanks for playing\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a whole number\n";
    }
}
