#include <iostream>
using namespace std;

int main()
{
    // a. Declare appropriate variables
    float subject1 = 0;
    float subject2 = 0;
    float subject3 = 0;
    float subject4 = 0;
    float subject5 = 0;
    float average = 0;

    // Prompt user to enter marks
    cout << "Enter marks for five subjects of second semester:" << endl;

    cout << "Subject 1: ";
    cin >> subject1;

    cout << "Subject 2: ";
    cin >> subject2;

    cout << "Subject 3: ";
    cin >> subject3;

    cout << "Subject 4: ";
    cin >> subject4;

    cout << "Subject 5: ";
    cin >> subject5;

    // b. Calculate average
    average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    // Display average
    cout << "Average marks obtained: " << average << endl;

    return 0;
}