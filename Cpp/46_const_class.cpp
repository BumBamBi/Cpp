/*
1) const를 함수 뒤에 붙이면, 그 함수 내에서는 멤버 변수값 수정 불가

2) 객체를 가리키는 포인터가 const라면, const 멤버 함수만 호출 가능

*/

#include<iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string s) {
		this->name = s;
	}
	void show() const {
		// this->name = this->name + "!!";	// 함수 뒤에 const가 있어서 name값 변경 불가 
		cout << "my name is " << this->name << endl;
	}
	void test() {
		cout << "test!" << endl;
	}
};

int main() {

	Person* pa = new Person("kwangwoo");

	pa->show();

	delete pa;



	const Person* pb = new Person("kwangwoo");

	// const 메소드인 show() 는 호출 가능
	pb->show();

	// 그러나 const가 아닌 메소드는 호출 불가
	// pb->test();

	delete pb;

	return 0;
}