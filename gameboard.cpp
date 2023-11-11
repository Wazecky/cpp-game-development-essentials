#include <iostream>
#include <iomanip>

// Constants for the game board size
const int rows = 5;
const int cols = 5;

// Function to display the game board
void displayBoard(char board[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << std::setw(2) << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
}

// Function to initialize the game board
void initializeBoard(char board[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            board[i][j] = '.';
        }
    }
}

// Function to place obstacles on the game board
void placeObstacles(char board[rows][cols]) {
    // Place obstacles at specific positions
    board[1][1] = '#';
    board[2][2] = '#';
    board[3][3] = '#';
}

int main() {
    // Declare and initialize the game board
    char gameBoard[rows][cols];
    initializeBoard(gameBoard);

    // Place obstacles on the game board
    placeObstacles(gameBoard);

    // Display the initial game board
    std::cout << "Initial Game Board:" << std::endl;
    displayBoard(gameBoard);

    // Additional game logic can be added here...

    return 0;
}
