#include <iostream>
using namespace std;

int main()
{
    // b & c. Define and initialize variables
    float resistor1 = 0;
    float resistor2 = 0;
    float totalCurrent = 0;
    float branchCurrent1 = 0;
    float branchCurrent2 = 0;

    // d. Prompt user input
    cout << "Enter value of first resistor (R1): ";
    cin >> resistor1;

    cout << "Enter value of second resistor (R2): ";
    cin >> resistor2;

    cout << "Enter total current (I): ";
    cin >> totalCurrent;

    // e. Calculate branch currents using current divider rule
    branchCurrent1 = totalCurrent * (resistor2 / (resistor1 + resistor2));
    branchCurrent2 = totalCurrent * (resistor1 / (resistor1 + resistor2));

    // f. Display results
    cout << "\nFirst Resistor (R1) = " << resistor1 << " ohms" << endl;
    cout << "Second Resistor (R2) = " << resistor2 << " ohms" << endl;
    cout << "Total Current (I) = " << totalCurrent << " A" << endl;

    cout << "\nCurrent through R1 (I1) = " << branchCurrent1 << " A" << endl;
    cout << "Current through R2 (I2) = " << branchCurrent2 << " A" << endl;

    return 0;
}