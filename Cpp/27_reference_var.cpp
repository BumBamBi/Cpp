#include<iostream>

using namespace std;

void func(int& rn) {
	// ���������� ��� = ������ó�� ����(�׷��� �������� ���輺�� ���x)
	rn = 100;	
	return;
}

int main_27() {
	
	/*
	reference var
	int a;
	int& ra = a; ���� ��,
	a���� ra�ε� ���� ����(���� �ٲ�� ���� �ٲ�)
	*/

	int n = 10;

	cout << n << endl;

	func(n);

	cout << n << endl;

	return 0;
}