#include<iostream>

using namespace std;

void func_a() {
	cout << "im a" << endl;
}

void func_b() {
	cout << "im b" << endl;
}

int main() {

	// �Լ� ������
	// ���� type = (*������ ����)(�Ķ���� type)
	void (*pf)(void);

	pf = func_a;
	pf();
	pf = func_b;
	pf();

	return 0;
}