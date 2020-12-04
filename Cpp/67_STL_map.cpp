/*
	container map

	- hash table 처럼,  (키값, value 값)으로 찾음
	- 어떤 값에 Tag을 붙혀서 저장하는 것
	- 키값이 동일하면 안됨
	- 키값과 value값으로 객체를 넣기 가능

	method
	- find()
		return iterator
	- insert()
		return pair<iterator, bool>		(키값이 동일하면 insert() 실패)
*/

// map 은 순서가 중요하지 않음
// match시키는것이 중요하기 때문

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
		// 이름이 다르면 순서순
		if (name < p.name) {
			return true;
		}
		else if (name > p.name) {
			return false;
		}
		// 이름이 같으면 나이순
		if (age < p.age) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	// <키, 값>
	map<string, int> mymap;

	mymap.insert(make_pair("a", 3));
	mymap.insert(make_pair("b", 2));
	mymap.insert(make_pair("c", 3));
	mymap.insert(make_pair("d", 4));
	mymap.insert(make_pair("e", 5));

	// 출력
	for (auto& e : mymap) {
		cout << e.first << "," << e.second << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;

	// find()
	cout << mymap["a"] << endl;		// match가 빨라서 이렇게도 사용 가능(없으면 0 출력)

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

	// 출력
	for (auto& e : mymap) {
		cout << e.first << "," << e.second << " ";
	}
	cout << endl;

	cout << "===================================" << endl;

	// <키, 값>
	map<Person, int> mymap2;

	mymap2.insert(make_pair(Person("a", 1), 1));
	mymap2.insert(make_pair(Person("b", 2), 2));
	mymap2.insert(make_pair(Person("c", 3), 3));
	mymap2.insert(make_pair(Person("d", 4), 4));
	mymap2.insert(make_pair(Person("e", 5), 5));

	// 출력
	for (auto& e : mymap2) {
		cout << e.first.name << "(" << e.first.age << ")," << e.second << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;

	// find()		// 키값으로 class
	cout << "Person(a,1)'s Value : " << mymap2[Person("a",1)] << endl;		// match가 빨라서 이렇게도 사용 가능(없으면 0 출력)
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

	// 출력
	for (auto& e : mymap2) {
		cout << e.first.name << "(" << e.first.age << ")," << e.second << " ";
	}
	cout << endl;

	return 0;
}