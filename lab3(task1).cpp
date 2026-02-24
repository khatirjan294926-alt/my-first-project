#include <iostream>
using namespace std;

int main()
{
    // a. Define variables
    float voltage = 0.0;
    float current = 0.0;
    float resistance = 0.0;

    // c. Prompt user for input
    cout << "Enter the value of Voltage (V): ";
    cin >> voltage;

    cout << "Enter the value of Current (I): ";
    cin >> current;

    // Check if current is not zero
    if(current != 0)
    {
        // d. Calculate resistance using Ohm's Law
        resistance = voltage / current;

        // Display results
        cout << "\n--- Results ---" << endl;
        cout << "Voltage (V): " << voltage << " Volts" << endl;
        cout << "Current (I): " << current << " Amperes" << endl;
        cout << "Resistance (R): " << resistance << " Ohms" << endl;
    }
    else
    {
        cout << "Current cannot be zero. Resistance cannot be calculated." << endl;
    }

    return 0;
}