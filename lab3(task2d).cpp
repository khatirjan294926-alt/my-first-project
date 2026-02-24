#include <iostream>
using namespace std;

int main()
{
    // b & c. Define and initialize variables
    float resistor1 = 4;
    float resistor2 = 0;
    float netResistance = 0;

    // d. Prompt user to enter values
    cout << "Enter value of first resistor (R1): ";
    cin >> resistor1;

    cout << "Enter value of second resistor (R2): ";
    cin >> resistor2;

    // e. Calculate net resistance (parallel formula)
    netResistance = (resistor1 * resistor2) / (resistor1 + resistor2);

    // f. Display all parameters
    cout << "\nFirst Resistor (R1) = " << resistor1 << " ohms" << endl;
    cout << "Second Resistor (R2) = " << resistor2 << " ohms" << endl;
    cout << "Net Resistance (Parallel) = " << netResistance << " ohms" << endl;

    return 0;
}