#include<iostream>

using namespace std;

struct person {
	string name;
	unsigned int age;
};

person* pdata = 0;

bool findPerson(string name) {
	for (int i = 0; i < 3; i++) {
		if (pdata[i].name == name) {
			return true;
		}
	}
	return false;
}

bool findPerson(unsigned int age) {
	for (int i = 0; i < 3; i++) {
		if (pdata[i].age == age) {
			return true;
		}
	}
	return false;
}


int main_25() {

	/*
	over + loading
	
	같은 이름의 함수 이용 가능

	단, 매개변수의 개수와 데이터 타입이 달라야함.
	(리턴형은 달라져도 오버로딩 사용 불가능)
	*/

	pdata = new person[3];

	pdata[0] = { "james", 10 };
	pdata[1] = { "alice", 12 };
	pdata[2] = { "tom", 15 };

	cout << boolalpha;
	cout << findPerson("james") << endl;
	cout << findPerson("aliceee") << endl;
	cout << findPerson(10) << endl;


	return 0;
}