#include <iostream>

// Enum to represent different states of the game
enum GameState {
    MENU,
    PLAYING,
    GAME_OVER
};

// Function to handle the menu state
void handleMenuState() {
    std::cout << "Welcome to the Game! Press 'p' to start playing." << std::endl;
}

// Function to handle the playing state
void handlePlayingState() {
    std::cout << "You are now playing the game. Press 'q' to quit or 'g' for game over." << std::endl;
}

// Function to handle the game over state
void handleGameOverState() {
    std::cout << "Game over! Press 'm' to return to the main menu." << std::endl;
}

int main() {
    // Initial game state
    GameState currentState = MENU;

    // Game loop
    while (true) {
        // State machine switch
        switch (currentState) {
            case MENU:
                handleMenuState();
                break;
            case PLAYING:
                handlePlayingState();
                break;
            case GAME_OVER:
                handleGameOverState();
                break;
        }

        // Get user input to transition between states
        char userInput;
        std::cin >> userInput;

        // State transitions based on user input
        switch (currentState) {
            case MENU:
                if (userInput == 'p') {
                    currentState = PLAYING;
                }
                break;
            case PLAYING:
                if (userInput == 'q') {
                    // Quit the game
                    return 0;
                } else if (userInput == 'g') {
                    currentState = GAME_OVER;
                }
                break;
            case GAME_OVER:
                if (userInput == 'm') {
                    currentState = MENU;
                }
                break;
        }

        // Clear the console screen for better visualization (for Windows)
#ifdef _WIN32
        std::system("cls");
#else
        std::system("clear");
#endif
    }

    return 0;
}
