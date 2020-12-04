/*
	container map

	- hash table ó��,  (Ű��, value ��)���� ã��
	- � ���� Tag�� ������ �����ϴ� ��
	- Ű���� �����ϸ� �ȵ�
	- Ű���� value������ ��ü�� �ֱ� ����

	method
	- find()
		return iterator
	- insert()
		return pair<iterator, bool>		(Ű���� �����ϸ� insert() ����)
*/

// map �� ������ �߿����� ����
// match��Ű�°��� �߿��ϱ� ����

#include<iostream>
#include<map>
#include<string>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}
	bool operator<(const Person& p) const {
		// �̸��� �ٸ��� ������
		if (name < p.name) {
			return true;
		}
		else if (name > p.name) {
			return false;
		}
		// �̸��� ������ ���̼�
		if (age < p.age) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	// <Ű, ��>
	map<string, int> mymap;

	mymap.insert(make_pair("a", 3));
	mymap.insert(make_pair("b", 2));
	mymap.insert(make_pair("c", 3));
	mymap.insert(make_pair("d", 4));
	mymap.insert(make_pair("e", 5));

	// ���
	for (auto& e : mymap) {
		cout << e.first << "," << e.second << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;

	// find()
	cout << mymap["a"] << endl;		// match�� ���� �̷��Ե� ��� ����(������ 0 ���)

	auto pos = mymap.find("a");

	if (pos == mymap.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found - ";
		cout << (*pos).first << "," << (*pos).second << " " << endl;
	}

	//insert()			pair<iterator, bool>
	pair<map<string, int>::iterator, bool> res = mymap.insert(make_pair("a", 1));

	if (res.second) {
		cout << "insertion succes" << endl;
	}
	else {
		cout << "already exis : " << (*res.first).first << endl;
	}

	// erase()
	mymap.erase("b");

	// ���
	for (auto& e : mymap) {
		cout << e.first << "," << e.second << " ";
	}
	cout << endl;

	cout << "===================================" << endl;

	// <Ű, ��>
	map<Person, int> mymap2;

	mymap2.insert(make_pair(Person("a", 1), 1));
	mymap2.insert(make_pair(Person("b", 2), 2));
	mymap2.insert(make_pair(Person("c", 3), 3));
	mymap2.insert(make_pair(Person("d", 4), 4));
	mymap2.insert(make_pair(Person("e", 5), 5));

	// ���
	for (auto& e : mymap2) {
		cout << e.first.name << "(" << e.first.age << ")," << e.second << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;

	// find()		// Ű������ class
	cout << "Person(a,1)'s Value : " << mymap2[Person("a",1)] << endl;		// match�� ���� �̷��Ե� ��� ����(������ 0 ���)
	auto pos2 = mymap2.find(Person("a",1));

	if (pos2 == mymap2.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found - ";
		cout << (*pos2).first.name << "(" << (*pos2).first.age << ")," << (*pos2).second << " " << endl;;
	}

	//insert()			pair<iterator, bool>
	pair<map<Person, int>::iterator, bool> res2 = mymap2.insert(make_pair(Person("a",1), 1));

	if (res2.second) {
		cout << "insertion succes" << endl;
	}
	else {
		cout << "already exis : " << (*res2.first).first.name << endl;
	}

	// erase()
	mymap2.erase(Person("b",2));

	// ���
	for (auto& e : mymap2) {
		cout << e.first.name << "(" << e.first.age << ")," << e.second << " ";
	}
	cout << endl;

	return 0;
}