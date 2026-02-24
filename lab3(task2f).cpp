#include <iostream>
using namespace std;

int main()
{
    // b & c. Define and initialize variables
    float R1 = 0, R2 = 0, R3 = 0;   // Star resistances
    float R12 = 0, R23 = 0, R31 = 0; // Delta resistances
    float sum = 0;

    // d. Prompt user input
    cout << "Enter Star Resistance R1: ";
    cin >> R1;

    cout << "Enter Star Resistance R2: ";
    cin >> R2;

    cout << "Enter Star Resistance R3: ";
    cin >> R3;

    // e. Calculate Delta resistances
    sum = (R1 * R2) + (R2 * R3) + (R3 * R1);

    R12 = sum / R3;
    R23 = sum / R1;
    R31 = sum / R2;

    // f. Display results
    cout << "\nStar Resistances:" << endl;
    cout << "R1 = " << R1 << " ohms" << endl;
    cout << "R2 = " << R2 << " ohms" << endl;
    cout << "R3 = " << R3 << " ohms" << endl;

    cout << "\nEquivalent Delta Resistances:" << endl;
    cout << "R12 = " << R12 << " ohms" << endl;
    cout << "R23 = " << R23 << " ohms" << endl;
    cout << "R31 = " << R31 << " ohms" << endl;

    return 0;
}