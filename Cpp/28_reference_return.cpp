#include<iostream>

using namespace std;

const int& func_a(int& n) {

	n += 10;
	return n;
}

int main() {

	/*
	1. int func(int)		-> �Ϲ����� �Լ� ����(�ٸ� 3��ó�� int& b = func(int) �����̸� ���� ����)
	2. int func(int&)		-> �� �Ⱦ�
	
	3. int& func(int)		-> int& b = func(int) �����̸� �̹� �����Ȱ��� �����ؼ�, b�� �̻��� ���� ����
	4. int& func(int&)		-> �ַ� ���

	5. const int& func(int&)	-> func_a(k) = 1000; �� ���������Ƿ�, const�� ������ �׷��� ���ϵ��� ��
	*/

	int k = 10;
	
	int b = func_a(k);

	return 0;
}