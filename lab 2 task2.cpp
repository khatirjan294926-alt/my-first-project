#include <iostream>
using namespace std;

int main() 
{
    // Different types of variables
    int a = 10;
    float b = 5.5;
    double c = 20.123;
    char d = 'A';
    bool e = true;

    cout << "INT Variable:" << endl;
    cout << "Value: " << a << endl;
    cout << "Size: " << sizeof(a) << " bytes" << endl;
    cout << "Address: " << &a << endl;
    cout << "--------------------------" << endl;

    cout << "FLOAT Variable:" << endl;
    cout << "Value: " << b << endl;
    cout << "Size: " << sizeof(b) << " bytes" << endl;
    cout << "Address: " << &b << endl;
    cout << "--------------------------" << endl;

    cout << "DOUBLE Variable:" << endl;
    cout << "Value: " << c << endl;
    cout << "Size: " << sizeof(c) << " bytes" << endl;
    cout << "Address: " << &c << endl;
    cout << "--------------------------" << endl;

    cout << "CHAR Variable:" << endl;
    cout << "Value: " << d << endl;
    cout << "Size: " << sizeof(d) << " bytes" << endl;
    cout << "Address: " << &d << endl;
    cout << "--------------------------" << endl;

    cout << "BOOL Variable:" << endl;
    cout << "Value: " << e << endl;
    cout << "Size: " << sizeof(e) << " bytes" << endl;
    cout << "Address: " << &e << endl;

    return 0;
}
