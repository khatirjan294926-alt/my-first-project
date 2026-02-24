#include <iostream>
using namespace std;

int main()
{
    // a. Define appropriate variables
    float length = 0;       // Initialized to 0
    float width = 0;        // Initialized to 0
    float area = 1;         // Initialized to 1
    float perimeter = 1;    // Initialized to 1

    // c. Prompt user to enter values
    cout << "Enter the length of rectangle: ";
    cin >> length;

    cout << "Enter the width of rectangle: ";
    cin >> width;

    // d. Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // e. Display results
    cout << "\nArea of rectangle = " << area << endl;
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;
}