#include <iostream>
using namespace std;
int main()
{
	float celsius, fahrenheit;
	cout <<"enter temperture in celsius:";
	cin >> celsius;
	fahrenheit = (celsius* 9/5) +32;
	cout <<"tempertaure in fahrenheit=" << fahrenheit << endl;
	return 0;
	
}