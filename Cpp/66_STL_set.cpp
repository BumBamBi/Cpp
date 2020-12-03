/*
	continer set

	- 중복되지 않는 값을 저장하는 용도
	- 요소의 존재 유무를 확인
	- 오름차순 정렬

	method
	- insert()
		return pair<iterator,bool>
		bool - 값을 넣을때 중복이면 False
		iterator - False라면, 중복되는 해당 포인터값

	- find()
		요소의 존재 유무 확인
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

	// 오름차순으로 하기 위해, opeartor 메소드 오버로딩
	// type으로 class를 넣어서, 두 값을 비교하는 operator메소드
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

	// 1이  있다면, 그 위치에 대한 interator
	//		없다면, myset.end()
	auto pos = myset.find(1);

	if (pos == myset.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found" << endl;
	}

	// insert() 시, 잘 insert되었는지 확인
	pair<set<int>::iterator, bool> res = myset.insert(30);
	if (res.second == false) {
		cout << "already exist" << endl;
	}
	else {
		cout << "insertion success" << endl;
	}
	
	// 지우기
	myset.erase(3);

	// 출력
	// for (auto e = myset.begin(); e != myset.end(); e++) {	// interator 이용
	for(auto& e : myset){	// range-based 이용
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

	// 1이  있다면, 그 위치에 대한 interator
	//		없다면, myset.end()
	auto pos2 = myset2.find(Person("Jame1", 2));

	if (pos2 == myset2.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "found" << endl;
	}

	// insert() 시, 잘 insert되었는지 확인
	pair<set<Person>::iterator, bool> res2 = myset2.insert(Person("Jame3", 1));
	if (res2.second == false) {
		cout << "already exist" << endl;
	}
	else {
		cout << "insertion success" << endl;
	}

	// 지우기
	myset2.erase(Person("Jame5", 5));

	// 출력
	// for (auto e = myset.begin(); e != myset.end(); e++) {	// interator 이용
	for (auto& e : myset2) {	// range-based 이용
		cout << e.name << "(" << e.age << ") " ;
	}
	cout << endl;

	return 0;
}