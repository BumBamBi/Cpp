#include<iostream>

using namespace std;

int main() {

	int a = 10;

	int* pa;
	pa = &a;
	
	cout << a << endl;
	cout << *pa << endl;

	int* pb1 = nullptr;	// nullptr == (int*) 0
	int* pb2 = NULL;	// NULL == (int) 0

	// NULL �� ���� 0 ��������,
	// nullptr�� ������ ������ ������

	int* p = new int[5];

	for (int i = 0; i < 5; i++) {
		p[i] = i + 1;
	}

	delete[] p;

	return 0;
}