/*
	container map

	- hash table ó��,  (Ű��, value ��)���� ã��
	- � ���� Tag�� ������ �����ϴ� ��
	- Ű���� �����ϸ� �ȵ�

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
		cout << e.first << "(" << e.second << ") ";
	}
	cout << endl;
	cout << "===============" << endl;

	// find()
	cout << mymap["a"] << endl;		// match�� ���� �̷��Ե� ��� ����(������ 0 ���)

	auto pos = mymap.find("a");

	if (pos == mymap.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found - ";
		cout << (*pos).first << "(" << (*pos).second << ") " << endl;
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
		cout << e.first << "(" << e.second << ") ";
	}
	cout << endl;

	return 0;
}