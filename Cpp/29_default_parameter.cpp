#include<iostream>

using namespace std;

void func_a(int a, int b, int c) {
	cout << a << b << c << endl;
}

void func_b(int a = 1, int b = 2, int c = 3) {
	cout << a << b << c << endl;
}


int main() {

	/*
	�Լ��� ȣ���� ��, �Ķ���Ϳ� ���� �̸� �־��ָ�, �ʼ��� �ȳ־��൵ ��
	�׷��� �μ��� 3���� ��, ó��, �������� default �� �ϰ� �߰����� �ʼ��� �ϸ�,
	���ڰ� ó�������� �ι�° ������ ���� �ȵ�!!!
	*/

	func_a(1, 2, 3);
	func_b();

	return 0;

}