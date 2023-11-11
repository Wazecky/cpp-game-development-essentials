#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate a random number within a specified range
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to simulate a battle with enemies
bool battle() {
    int enemies = getRandomNumber(2, 5); // Random number of enemies

    while (enemies > 0) {
        // Simulate a battle round
        std::cout << "You encounter " << enemies << " enemies!" << std::endl;

        // Simulate the player attacking the enemies
        int playerAttack = getRandomNumber(1, 20);
        int enemyDefense = getRandomNumber(1, 15);

        if (playerAttack > enemyDefense) {
            std::cout << "You defeat an enemy!" << std::endl;
            enemies--;
        } else {
            std::cout << "The enemy withstands your attack!" << std::endl;
        }

        // Pause for a moment before the next round
        std::cout << "-----------------------------" << std::endl;
        std::cout << "Press Enter to continue...";
        std::cin.ignore();
    }

    std::cout << "Congratulations! You have defeated all enemies!" << std::endl;
    return true;
}

// Function to simulate player decision-making
void makeDecision() {
    std::cout << "You come to a fork in the road. What do you want to do?" << std::endl;
    std::cout << "1. Go left\n2. Go right" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You chose to go left. You find a hidden passage." << std::endl;
            break;
        case 2:
            std::cout << "You chose to go right. You encounter a locked door." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. The path ahead is unclear." << std::endl;
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(std::time(0)));

    // Game simulation using functions
    makeDecision();
    
    if (battle()) {
        std::cout << "You continue your journey." << std::endl;
        // Add more game logic or functions as needed
    }

    return 0;
}
