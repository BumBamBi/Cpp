#include<iostream>

using namespace std;

int main() {

	int a = 10;		// 10진수
	int b = 0x10;	// 16진수
	int c = 010;	// 8진수

	// 10진수로 표현하기
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	// 각 진수별로 표현하기
	cout << dec;
	cout << a << endl;

	cout << hex;
	cout << b << endl;

	cout << oct;
	cout << c << endl;


	return 0;
}