#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to simulate a battle with enemies
void battle() {
    int enemies = 3; // Initial number of enemies

    while (enemies > 0) {
        // Simulate a battle round
        std::cout << "You encounter " << enemies << " enemies!" << std::endl;

        // Simulate the player attacking the enemies
        int playerAttack = rand() % 20 + 1;
        int enemyDefense = rand() % 15 + 1;

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
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(std::time(0)));

    // Game simulation using a loop
    char playAgain;
    do {
        // Simulate a battle
        battle();

        // Ask the player if they want to play again
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing! Goodbye." << std::endl;

    return 0;
}
