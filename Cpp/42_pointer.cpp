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

	// NULL 은 정수 0 값이지만,
	// nullptr의 형식은 포인터 형식임

	int* p = new int[5];

	for (int i = 0; i < 5; i++) {
		p[i] = i + 1;
	}

	delete[] p;

	return 0;
}