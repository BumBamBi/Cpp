#include<iostream>

using namespace std;

void func_a() {
	cout << "im a" << endl;
}

void func_b() {
	cout << "im b" << endl;
}

int main() {

	// 함수 포인터
	// 리턴 type = (*포인터 변수)(파라미터 type)
	void (*pf)(void);

	pf = func_a;
	pf();
	pf = func_b;
	pf();

	return 0;
}