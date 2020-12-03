/*
	container map

	- hash table 처럼,  (키값, value 값)으로 찾음
	- 어떤 값에 Tag을 붙혀서 저장하는 것
	- 키값이 동일하면 안됨

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
		cout << e.first << "(" << e.second << ") ";
	}
	cout << endl;
	cout << "===============" << endl;

	// find()
	cout << mymap["a"] << endl;		// match가 빨라서 이렇게도 사용 가능(없으면 0 출력)

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

	// 출력
	for (auto& e : mymap) {
		cout << e.first << "(" << e.second << ") ";
	}
	cout << endl;

	return 0;
}