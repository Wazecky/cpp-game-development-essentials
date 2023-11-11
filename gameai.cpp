#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

// Constants for simulation parameters
const double wanderSpeed = 5.0;   // Speed of wandering (units per second)
const double chaseSpeed = 10.0;   // Speed of chasing (units per second)
const double detectionRadius = 10.0;  // Radius for detecting the player (units)

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

// Function to simulate NPC behavior
void simulateNPC(double& npcX, double& npcY, double playerX, double playerY) {
    // Calculate distance to the player
    double distanceToPlayer = calculateDistance(npcX, npcY, playerX, playerY);

    // NPC behavior based on distance to the player
    if (distanceToPlayer > detectionRadius) {
        // Wander randomly if player is not detected
        double angle = static_cast<double>(std::rand()) / RAND_MAX * 2.0 * M_PI;
        npcX += wanderSpeed * std::cos(angle);
        npcY += wanderSpeed * std::sin(angle);
        std::cout << "NPC is wandering." << std::endl;
    } else {
        // Chase the player if detected
        double angleToPlayer = std::atan2(playerY - npcY, playerX - npcX);
        npcX += chaseSpeed * std::cos(angleToPlayer);
        npcY += chaseSpeed * std::sin(angleToPlayer);
        std::cout << "NPC is chasing the player." << std::endl;
    }
}

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Initial positions of NPC and player
    double npcX = 0.0, npcY = 0.0;
    double playerX = 8.0, playerY = 8.0;

    // Simulation loop
    for (int i = 0; i < 5; ++i) {
        // Simulate NPC behavior
        simulateNPC(npcX, npcY, playerX, playerY);

        // Display NPC and player positions
        std::cout << "NPC Position: (" << npcX << ", " << npcY << ")" << std::endl;
        std::cout << "Player Position: (" << playerX << ", " << playerY << ")" << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    return 0;
}
