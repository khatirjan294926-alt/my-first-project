#include <iostream>
using namespace std;

int main()
{
    // a. Define appropriate variables
    float radius = 0;          // initialized to 0
    float circumference = 1;   // initialized to 1

    // c. Prompt user to enter radius
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // d. Calculate circumference
    circumference = 2 * 3.1416 * radius;

    // Display radius and circumference
    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}