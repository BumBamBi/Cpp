#include<iostream>

using namespace std;

int main() {

	int a = 10;		// 10����
	int b = 0x10;	// 16����
	int c = 010;	// 8����

	// 10������ ǥ���ϱ�
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	// �� �������� ǥ���ϱ�
	cout << dec;
	cout << a << endl;

	cout << hex;
	cout << b << endl;

	cout << oct;
	cout << c << endl;


	return 0;
}