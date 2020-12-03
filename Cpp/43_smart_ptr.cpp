/*
메모리 자동해제
자바보다 속도 향상
nullptr로 자동 초기화됨
내가 임의로 delete시킬 수 없음 (알아서 하려 함)

동적 할당 받은 경우에만 사용 가능!!! (정적은 나중에 해제를 못하니까)
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


	// 배열
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