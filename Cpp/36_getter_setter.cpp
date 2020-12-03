/*
private 한 변수를 read/write하기 위해 필요한 함수들이 있다.
read 하는 함수 : getter
write 하는 함수 : setter

getter/setter 의 이름 : get/set 변수명
ex) 변수명 age		getAge()	setAge()
*/

#include<iostream>

using namespace std;

class Person {
private:
	int age;
public:
	// 얘네는 inline으로 실행됨 - 따라서 주로 클래스 안에서 전부 코드 작성
	int getAge() {
		return age;
	}
	void setAge(int _age) {
		age = _age;
	}
};

int main() {
	Person a;
	a.setAge(24);
	cout << a.getAge() << endl;

}