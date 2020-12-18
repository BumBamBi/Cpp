/*
	STL algorithm

	- find
	- find_if
	- count
	- count_if
	- for_each	: ��� container���� �ϰ�ó�� �� �� �յ���
	- sort

	- lambda expression : �̸��� ���� �Լ�
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

// ���� �Լ��� ����
bool findCondition(Person& p) {
	if (p.getAge() < 3) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	// �� �ֱ�
	vector<Person> peopleDB;

	peopleDB.push_back(Person("a", 1));
	peopleDB.push_back(Person("b", 2));
	peopleDB.push_back(Person("c", 3));
	peopleDB.push_back(Person("d", 4));
	peopleDB.push_back(Person("e", 5));

	// ���
	for (auto& e : peopleDB) {
		e.showPersonInfo();
	}


	cout << "----find--------------------------" << endl;
	// find
	// 1) ã�� ������ iterator�� �̿��Ͽ� ���� (����, ��-1, ��)
	// 2) ã�� ���� ����
	// 3) ��ȯ������ iterator ��ġ
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
	// ���ǿ� �´� ���� ù ��° ��� ����
	pos = find_if(peopleDB.begin(), peopleDB.end(), findCondition);		// �Լ��� ���� ��������
	// lambda (�Լ����� []�� �ؼ� �׳� �Լ� ��������)
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
		// ��������
		[](Person& p1, Person& p2) {
			if (p1.getAge() < p2.getAge()) {
				// true �ϸ� ��������
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