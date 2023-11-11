#include <iostream>
#include <string>

int main() {
    // Output to console
    std::cout << "Welcome to the Console Interaction Program!" << std::endl;

    // Input from console
    std::cout << "Please enter your name: ";
    std::string playerName;
    std::getline(std::cin, playerName);

    // More complex output using variables
    std::cout << "Hello, " << playerName << "! Let's do some math." << std::endl;

    // Math operation based on user input
    std::cout << "Enter a number: ";
    double num1;
    std::cin >> num1;

    std::cout << "Enter another number: ";
    double num2;
    std::cin >> num2;

    double sum = num1 + num2;

    // Output the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
