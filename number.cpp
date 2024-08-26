#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(0)));

    int maxRange;
    std::cout << "Enter the maximum range for the random number: ";
    std::cin >> maxRange;

    // Generate a random number between 1 and maxRange
    int randomNumber = std::rand() % maxRange + 1;
    int guess = 0;

    std::cout << "I have generated a random number between 1 and " << maxRange << ".\n";
    std::cout << "Can you guess what it is?\n";

    // Loop until the user guesses the correct number
    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << "\n";
        }
    }

    return 0;
}
