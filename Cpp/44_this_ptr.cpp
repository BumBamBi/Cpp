/*
this
객체 자신을 가리키는 포인터
클래스 내에서 변수와 메소드에 접근 가능

단순히 변수나 메소드에 접근할 땐 필요없지만, 더 다양한걸 할 수 있음 
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
	void show() {
		cout << "my name is " << this->name << endl;
	}
};

int main() {

	Person* pa = new Person("kwangwoo");

	pa->show();

	delete pa;


	return 0;
}