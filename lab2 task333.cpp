#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	float b = 5.5;
	char c = 'A';
	double d = 20.2345;
	bool e = true;
	
	cout <<"INT variable:" << endl;
	cout <<"value :" <<   a   << endl;
	cout <<"size:"<< sizeof(a) << "bytes" << endl;
	cout <<"address:"<< &a << endl;
	
	cout <<"float variable:" << endl;
	cout <<"value:" <<   b   << endl;
	cout <<"size:" << sizeof(b) << "bytes" << endl;
	cout <<"address:" << &b << endl;
	cout <<"-------------------------"<< endl;
	
	cout <<"character variable:" << endl;
	cout <<"value:" <<   c   << endl;
	cout <<"size:" << sizeof(c) << "bytes" << endl;
	cout <<"address:" << &c << endl;
	cout <<"---------------------------"<< endl;
	 
	cout <<"double variable:" << endl;
	cout <<"value:" <<   d   << endl;
	cout <<"size:" << sizeof(d) << "bytes" << endl;
	cout <<"address:" << &d << endl;
	cout <<"--------------------------" << endl;
	
	cout <<"bool variable:" << endl;
	cout <<"value:" <<   e   << endl;
	cout <<"size:" << sizeof(e) << "bytes" << endl;
	cout <<"address:" << &e << endl;
	cout <<"----------------------------" << endl;
	
	return 0;
	
	
	
}