/*
this
��ü �ڽ��� ����Ű�� ������
Ŭ���� ������ ������ �޼ҵ忡 ���� ����

�ܼ��� ������ �޼ҵ忡 ������ �� �ʿ������, �� �پ��Ѱ� �� �� ���� 
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
	void show() {
		cout << "my name is " << this->name << endl;
	}
};

int main() {

	Person* pa = new Person("kwangwoo");

	pa->show();

	delete pa;


	return 0;
}