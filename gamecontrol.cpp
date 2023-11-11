#include <iostream>

int main() {
    // Game scenario: Player makes a choice
    std::cout << "You find yourself at a crossroad. What do you want to do?" << std::endl;
    std::cout << "1. Go left\n2. Go right\n3. Stay where you are" << std::endl;

    int playerChoice;
    std::cin >> playerChoice;

    // Decision-making based on player's choice
    if (playerChoice == 1) {
        std::cout << "You chose to go left. You discover a hidden treasure!" << std::endl;
    } else if (playerChoice == 2) {
        std::cout << "You chose to go right. You encounter a fierce dragon!" << std::endl;
    } else if (playerChoice == 3) {
        std::cout << "You chose to stay where you are. Nothing eventful happens." << std::endl;
    } else {
        std::cout << "Invalid choice. The path ahead is unclear." << std::endl;
    }

    return 0;
}
