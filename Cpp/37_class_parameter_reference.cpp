// ���� �Լ��� �Ѱ��� ��, �׳� �ѱ�� ���� �����ʹ� �ȹٲ�
// ���� reference�� ���ؼ� �Ѱ��ִ� ��� (�����Ϳ� ���������, �ν� �� ����!)

#include<iostream>

using namespace std;

class Person {
public:
	int age;
};

void func1(Person p_of_func) {
	p_of_func.age = p_of_func.age * 2;
}

// ���ڰ� ���۷�����(����)
void func2(Person& p_of_func) {
	p_of_func.age = p_of_func.age * 2;
}

int main() {
	Person a;
	a.age = 24;
	// ���ڷ� ��ü�� ������ ����Ǿ ������ �Ⱥ���
	func1(a);
	cout << a.age << endl;

	// ���� ����������, �Լ� ���ڰ� ���۷����� �о�ͼ� ������ ����
	func2(a);
	cout << a.age << endl;

}