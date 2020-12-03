/*
	continer set

	- �ߺ����� �ʴ� ���� �����ϴ� �뵵
	- ����� ���� ������ Ȯ��
	- �������� ����

	method
	- insert()
		return pair<iterator,bool>
		bool - ���� ������ �ߺ��̸� False
		iterator - False���, �ߺ��Ǵ� �ش� �����Ͱ�

	- find()
		����� ���� ���� Ȯ��
		T/F 
*/
#include<iostream>
#include<set>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}

	// ������������ �ϱ� ����, opeartor �޼ҵ� �����ε�
	// type���� class�� �־, �� ���� ���ϴ� operator�޼ҵ�
	bool operator<(const Person& p) const {
		if (name < p.name) {
			return true;
		}
		else if (name == p.name) {
			if (age < p.age) {
				return true;
			}
		}

		return false;
	}
};

int main() {
	set<int> myset;

	myset.insert(5);
	myset.insert(3);
	myset.insert(1);
	myset.insert(2);
	myset.insert(4);

	// 1��  �ִٸ�, �� ��ġ�� ���� interator
	//		���ٸ�, myset.end()
	auto pos = myset.find(1);

	if (pos == myset.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found" << endl;
	}

	// insert() ��, �� insert�Ǿ����� Ȯ��
	pair<set<int>::iterator, bool> res = myset.insert(30);
	if (res.second == false) {
		cout << "already exist" << endl;
	}
	else {
		cout << "insertion success" << endl;
	}
	
	// �����
	myset.erase(3);

	// ���
	// for (auto e = myset.begin(); e != myset.end(); e++) {	// interator �̿�
	for(auto& e : myset){	// range-based �̿�
		cout << e << " ";
	}
	cout << endl;


	cout << "======================" << endl;


	set<Person> myset2;

	myset2.insert(Person("Jame1", 1));
	myset2.insert(Person("Jame2", 2));
	myset2.insert(Person("Jame3", 3));
	myset2.insert(Person("Jame4", 4));
	myset2.insert(Person("Jame5", 5));

	// 1��  �ִٸ�, �� ��ġ�� ���� interator
	//		���ٸ�, myset.end()
	auto pos2 = myset2.find(Person("Jame1", 2));

	if (pos2 == myset2.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found" << endl;
	}

	// insert() ��, �� insert�Ǿ����� Ȯ��
	pair<set<Person>::iterator, bool> res2 = myset2.insert(Person("Jame3", 1));
	if (res2.second == false) {
		cout << "already exist" << endl;
	}
	else {
		cout << "insertion success" << endl;
	}

	// �����
	myset2.erase(Person("Jame5", 5));

	// ���
	// for (auto e = myset.begin(); e != myset.end(); e++) {	// interator �̿�
	for (auto& e : myset2) {	// range-based �̿�
		cout << e.name << "(" << e.age << ") " ;
	}
	cout << endl;

	return 0;
}