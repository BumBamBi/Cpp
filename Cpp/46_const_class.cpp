/*
1) const�� �Լ� �ڿ� ���̸�, �� �Լ� �������� ��� ������ ���� �Ұ�

2) ��ü�� ����Ű�� �����Ͱ� const���, const ��� �Լ��� ȣ�� ����

*/

#include<iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string s) {
		this->name = s;
	}
	void show() const {
		// this->name = this->name + "!!";	// �Լ� �ڿ� const�� �־ name�� ���� �Ұ� 
		cout << "my name is " << this->name << endl;
	}
	void test() {
		cout << "test!" << endl;
	}
};

int main() {

	Person* pa = new Person("kwangwoo");

	pa->show();

	delete pa;



	const Person* pb = new Person("kwangwoo");

	// const �޼ҵ��� show() �� ȣ�� ����
	pb->show();

	// �׷��� const�� �ƴ� �޼ҵ�� ȣ�� �Ұ�
	// pb->test();

	delete pb;

	return 0;
}