#include <iostream>

using namespace std;

int main_07() {
	
	int a = 50;
	int b(50);
	int c = (50);
	int d{ 50 };
	int e = { 50 };

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return 0;
}