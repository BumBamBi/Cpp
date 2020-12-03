#include<iostream>

using namespace std;

int main() {

	char c = 'a';

	cout << c << endl;
	cout << int(c) << endl;


	cout.setf(ios_base::fixed, ios_base::floatfield);	// setformat - float 출력시, 소수점 fixed하여, 전부 표시

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