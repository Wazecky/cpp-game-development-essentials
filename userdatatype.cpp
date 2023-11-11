#include <iostream>
#include <string>

// Define the Player class
class Player {
public:
    // Constructor to initialize player attributes
    Player(const std::string& playerName, int playerHealth, int playerDamage)
        : name(playerName), health(playerHealth), damage(playerDamage) {}

    // Member function to display player information
    void displayInfo() const {
        std::cout << "Player Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Health: " << health << std::endl;
        std::cout << "Damage: " << damage << std::endl;
    }

private:
    // Member variables representing player attributes
    std::string name;
    int health;
    int damage;
};

int main() {
    // Create a Player object
    Player player1("John", 100, 20);

    // Display player information
    player1.displayInfo();

    return 0;
}
