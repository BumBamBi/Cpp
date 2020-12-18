/*
	STL algorithm

	- find
	- find_if
	- count
	- count_if
	- for_each	: 모든 container에게 일괄처리 할 수 잇도록
	- sort

	- lambda expression : 이름이 없는 함수
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}

	int getAge() {
		return age;
	}
	
	void showPersonInfo() {
		cout << name << " is " << age << " years old" << endl;
	}

	bool operator==(const Person& p) const{
		if (name == p.name && age == p.age) {
			return true;
		}
		else {
			return false;
		}
	}
};

// 따로 함수를 만듬
bool findCondition(Person& p) {
	if (p.getAge() < 3) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	// 값 넣기
	vector<Person> peopleDB;

	peopleDB.push_back(Person("a", 1));
	peopleDB.push_back(Person("b", 2));
	peopleDB.push_back(Person("c", 3));
	peopleDB.push_back(Person("d", 4));
	peopleDB.push_back(Person("e", 5));

	// 출력
	for (auto& e : peopleDB) {
		e.showPersonInfo();
	}


	cout << "----find--------------------------" << endl;
	// find
	// 1) 찾는 범위를 iterator를 이용하여 지정 (시작, 끝-1, 값)
	// 2) 찾는 값을 지정
	// 3) 반환값으로 iterator 위치
	auto pos = find(peopleDB.begin(), peopleDB.end(), Person("b", 2));

	if (pos == peopleDB.end()) {
		cout << "fail" << endl;
	}
	else {
		cout << "found" << endl;
		(*pos).showPersonInfo();
	}


	cout << "----find_if-----------------------" << endl;
	// find_if
	// 조건에 맞는 가장 첫 번째 요소 리턴
	pos = find_if(peopleDB.begin(), peopleDB.end(), findCondition);		// 함수를 따로 만들어야함
	// lambda (함수명을 []로 해서 그냥 함수 만들어버림)
	pos = find_if(peopleDB.begin(), peopleDB.end(),
		[](Person& p) {
			if (p.getAge() < 3) {
				return true;
			}
			else {
				return false;
			}
		}
	);

	if (pos == peopleDB.end()) {
		cout << "fail" << endl;
	}
	else {
		cout << "found" << endl;
		(*pos).showPersonInfo();
	}


	cout << "----count------------------------" << endl;
	int cnt = count(peopleDB.begin(), peopleDB.end(), Person("b", 2));
	cout << "count : " << cnt << endl;


	cout << "----count_if----------------------" << endl;
	cnt = count_if(peopleDB.begin(), peopleDB.end(), 
		[](Person& p) {
			if (p.getAge() > 3) {
				return true;
			}
			else {
				return false;
			}
		}
	);
	cout << "count_if : " << cnt << endl;

	
	cout << "----for_each----------------------" << endl;
	for_each(peopleDB.begin(), peopleDB.end(), 
		[](Person& p) {
			p.showPersonInfo();
		}
	);

	cout << "----sort----------------------" << endl;
	sort(peopleDB.begin(), peopleDB.end(),
		// 내림차순
		[](Person& p1, Person& p2) {
			if (p1.getAge() < p2.getAge()) {
				// true 하면 오름차순
				return false;
			}
			else {
				return true;
			}
		}
	);

	
	for (auto& e : peopleDB) {
		e.showPersonInfo();
	}

	return 0;
}