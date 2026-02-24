#include <iostream>
using namespace std;

int main()
{
    // a. Define variables
    float initialVelocity = 0.0;
    float finalVelocity = 0.0;
    float acceleration = 0.0;
    float time = 0.0;

    // c. Prompt user for input
    cout << "Enter Initial Velocity (u): ";
    cin >> initialVelocity;

    cout << "Enter Acceleration (a): ";
    cin >> acceleration;

    cout << "Enter Time (t): ";
    cin >> time;

    // d. Calculate final velocity using formula v = u + at
    finalVelocity = initialVelocity + (acceleration * time);

    // e. Display all parameters
    cout << "\n--- Results ---" << endl;
    cout << "Initial Velocity (u): " << initialVelocity << " m/s" << endl;
    cout << "Acceleration (a): " << acceleration << " m/s^2" << endl;
    cout << "Time (t): " << time << " seconds" << endl;
    cout << "Final Velocity (v): " << finalVelocity << " m/s" << endl;

    return 0;
}