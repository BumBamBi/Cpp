/*
1) const int* pa
	
	pa�� ����Ű�� ��ġ�� �ִ� ������ ���� �ٲ� �� ���� (*pa�� ���� x)

2) int* const pa

	pa�� ����� �ּ� ���� �ٲ� �� ���� (pa�� ���� x)

3) const int* const pa

	1, 2 ��� ����

*/

#include<iostream>

using namespace std;

int main() {
	
	int a = 10;
	int* pa = nullptr;
	//const int* pa = nullptr;	// *pa = 35���� ����
	//int* const pa = nullptr;	// pa = &a ���� ����



	pa = &a;

	cout << *pa << endl;

	*pa = 35;

	cout << *pa << endl;

	return 0;
}