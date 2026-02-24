#include <iostream>
#include <cmath>    // For sqrt()
using namespace std;

int main()
{
    // a. Define variables
    float a, b, c;
    float root1, root2, discriminant;

    // b. Prompt user to enter coefficients
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    // c. Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Calculate roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "\nRoot 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        cout << "\nBoth roots are equal." << endl;
        cout << "Root = " << root1 << endl;
    }
    else
    {
        cout << "\nRoots are imaginary (complex)." << endl;
    }

    return 0;
}