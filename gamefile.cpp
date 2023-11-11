#include <iostream>
#include <fstream>
#include <string>

// Function to save game progress to a file
void saveGame(const std::string& playerName, int playerScore) {
    std::ofstream outputFile("game_save.txt");

    if (outputFile.is_open()) {
        outputFile << playerName << std::endl;
        outputFile << playerScore << std::endl;

        std::cout << "Game progress saved successfully." << std::endl;
        outputFile.close();
    } else {
        std::cerr << "Unable to open the file for writing." << std::endl;
    }
}

// Function to load game progress from a file
void loadGame(std::string& playerName, int& playerScore) {
    std::ifstream inputFile("game_save.txt");

    if (inputFile.is_open()) {
        std::getline(inputFile, playerName);
        inputFile >> playerScore;

        std::cout << "Game progress loaded successfully." << std::endl;
        inputFile.close();
    } else {
        std::cerr << "Unable to open the file for reading. Starting a new game." << std::endl;
    }
}

int main() {
    std::string playerName;
    int playerScore = 0;

    // Attempt to load game progress
    loadGame(playerName, playerScore);

    // Display player information
    std::cout << "Player Name: " << playerName << std::endl;
    std::cout << "Player Score: " << playerScore << std::endl;

    // Simulate gameplay and update player score
    playerScore += 50;

    // Save updated game progress
    saveGame(playerName, playerScore);

    return 0;
}
