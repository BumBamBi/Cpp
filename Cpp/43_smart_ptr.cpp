/*
�޸� �ڵ�����
�ڹٺ��� �ӵ� ���
nullptr�� �ڵ� �ʱ�ȭ��
���� ���Ƿ� delete��ų �� ���� (�˾Ƽ� �Ϸ� ��)

���� �Ҵ� ���� ��쿡�� ��� ����!!! (������ ���߿� ������ ���ϴϱ�)
*/

#include<iostream>

using namespace std;

class Person {
public:
	string name;

	Person(string s) {
		name = s;
	}
	void show() {
		cout << "my name is " << name << endl;
	}
};

int main() {

	unique_ptr<int> pa(new int);

	*pa = 30;

	cout << *pa << endl;


	// �迭
	unique_ptr<int[]> pb(new int[5]);

	for (int i = 0; i < 5; i++) {
		pb[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		cout << pb[i] << endl;
	}

	unique_ptr<Person> p(new Person("kwangwoo"));

	p->show();

	return 0;
}