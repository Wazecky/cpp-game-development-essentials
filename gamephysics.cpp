#include <iostream>
#include <cmath>

// Constants for gravitational acceleration and initial velocity
const double g = 9.8;  // Acceleration due to gravity (m/s^2)
const double initialVelocity = 30.0;  // Initial velocity of the projectile (m/s)
const double launchAngle = 45.0;  // Launch angle in degrees

// Function to calculate the projectile motion
void calculateProjectileMotion(double time, double& x, double& y) {
    // Convert launch angle to radians
    double theta = launchAngle * M_PI / 180.0;

    // Calculate horizontal and vertical positions
    x = initialVelocity * time * std::cos(theta);
    y = initialVelocity * time * std::sin(theta) - 0.5 * g * time * time;
}

int main() {
    // Simulation parameters
    const double timeInterval = 0.1;  // Time interval for calculations (seconds)
    const double totalTime = 5.0;  // Total simulation time (seconds)

    // Perform projectile motion simulation
    for (double time = 0.0; time <= totalTime; time += timeInterval) {
        double x, y;
        calculateProjectileMotion(time, x, y);

        // Display position at current time
        std::cout << "Time: " << time << "s | Position: (" << x << "m, " << y << "m)" << std::endl;
    }

    return 0;
}
