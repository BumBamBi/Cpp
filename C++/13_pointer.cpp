#include<iostream>

using namespace std;

int main_13() {

	int* pi = new int;	// int�� ������ ������ ����, �װ��� ����Ű�� pi ����

	*pi = 10;
	cout << *pi << endl;

	*pi = 20;
	cout << *pi << endl;

	delete pi;			// new�� �Ҵ���� ������ ����

	return 0;
}