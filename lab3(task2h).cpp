#include <iostream>
#include <cmath>   // For sqrt function
using namespace std;

int main()
{
    // a. Define variables
    float base, perpendicular, hypotenuse;

    // b. Prompt user to enter values
    cout << "Enter value of base: ";
    cin >> base;

    cout << "Enter value of perpendicular: ";
    cin >> perpendicular;

    // c. Calculate hypotenuse
    hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));

    // d. Display result
    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;
}