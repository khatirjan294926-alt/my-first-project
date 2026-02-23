#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout <<"enter two integer:";
	cin >> num1 >> num2;
	
	int sum = num1 + num2;
	int diff = num1 - num2;
	int product = num1 * num2;
	
	double quotient = (double)num1 / num2;
	int remainder = num1 % num2;
	
	cout <<"sum:"<< sum << endl;
	cout <<"difference:"<< diff << endl;
	cout <<"product:"<< product << endl;
	cout <<"quotient:"<< quotient << endl;
	cout <<"remainder:"<< remainder << endl;
	
	return 0;
}