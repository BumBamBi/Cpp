// ��ȯ���� Ŭ�������� �ϳ��� ������ Ÿ��ó�� �ν���

#include<iostream>

using namespace std;

class Person {
public:
	int age;
	Person() {
		age = 0;
	}
};

Person bar1() {
	// ������� class ��ü�� �����ؼ� �Ѱ��ֱ�
	Person _p;
	return _p;
}

Person* bar2() {
	// ������� class�� �����Ͱ��� �����ؼ� �Ѱ��ֱ�
	Person* _pp = new Person();
	return _pp;
}

Person& bar3() {
	// ������� class�� reference���Ѱ��� (class�� �Ҹ�Ǳ� ������ �� �� ����)
	Person _rp;
	return _rp;
}

int main() {
	Person p = bar1();
	cout << p.age << endl;

	Person* pp = bar2();
	cout << pp->age << endl;

	Person& rp = bar3();
	cout << rp.age << endl;

	return 0;
}