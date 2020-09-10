#include<iostream>

using namespace std;

int main_10() {

	char c = 'a';

	cout << c << endl;
	cout << int(c) << endl;


	cout.setf(ios_base::fixed, ios_base::floatfield);

	float a = 10.0 / 3.0;
	double b = 10.0 / 3.0;

	a = a * 1e6;
	b = b * 1e6;
	
	cout << "float  : " << a << endl;
	cout << "double : " << b << endl;

	const double pi = 3.141592;
	// pi = 3.14;


	return 0;
}