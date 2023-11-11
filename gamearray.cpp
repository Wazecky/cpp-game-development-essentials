#include <iostream>
#include <string>

// Function to display information about a character
void displayCharacter(const std::string& name, const std::string& role, int health) {
    std::cout << "Character: " << name << std::endl;
    std::cout << "Role: " << role << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "-----------------------------" << std::endl;
}

int main() {
    // Define an array of characters
    const int numCharacters = 3;
    std::string characterNames[numCharacters] = {"Hero", "Villain", "Guide"};
    std::string characterRoles[numCharacters] = {"Main Character", "Antagonist", "Supporting Character"};
    int characterHealth[numCharacters] = {100, 120, 80};

    // Display information about each character in the array
    for (int i = 0; i < numCharacters; ++i) {
        displayCharacter(characterNames[i], characterRoles[i], characterHealth[i]);
    }

    return 0;
}
