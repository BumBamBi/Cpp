/*
private �� ������ read/write�ϱ� ���� �ʿ��� �Լ����� �ִ�.
read �ϴ� �Լ� : getter
write �ϴ� �Լ� : setter

getter/setter �� �̸� : get/set ������
ex) ������ age		getAge()	setAge()
*/

#include<iostream>

using namespace std;

class Person {
private:
	int age;
public:
	// ��״� inline���� ����� - ���� �ַ� Ŭ���� �ȿ��� ���� �ڵ� �ۼ�
	int getAge() {
		return age;
	}
	void setAge(int _age) {
		age = _age;
	}
};

int main() {
	Person a;
	a.setAge(24);
	cout << a.getAge() << endl;

}