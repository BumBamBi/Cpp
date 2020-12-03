#include<iostream>

using namespace std;

int main() {
	
	bool a = true;
	bool b = false;

	cout << boolalpha;	// std::boolalpha
	cout << a << " " << b << endl;

	cout << noboolalpha;
	cout << a << " " << b << endl;

	return 0;

}