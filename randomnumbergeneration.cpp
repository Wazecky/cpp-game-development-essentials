#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    // Output the random number
    std::cout << "Generated Random Number: " << randomNumber << std::endl;

    // Simulate a game event based on the random number
    if (randomNumber >= 1 && randomNumber <= 50) {
        std::cout << "A positive event occurred!" << std::endl;
    } else {
        std::cout << "A negative event occurred!" << std::endl;
    }

    return 0;
}
