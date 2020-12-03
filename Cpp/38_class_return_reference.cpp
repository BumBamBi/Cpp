// 반환형이 클래스여도 하나의 데이터 타입처럼 인식함

#include<iostream>

using namespace std;

class Person {
public:
	int age;
	Person() {
		age = 0;
	}
};

Person bar1() {
	// 만들어진 class 전체를 복사해서 넘겨주기
	Person _p;
	return _p;
}

Person* bar2() {
	// 만들어진 class의 포인터값을 복사해서 넘겨주기
	Person* _pp = new Person();
	return _pp;
}

Person& bar3() {
	// 만들어진 class의 reference를넘겨줌 (class가 소멸되기 때문에 쓸 일 없음)
	Person _rp;
	return _rp;
}

int main() {
	Person p = bar1();
	cout << p.age << endl;

	Person* pp = bar2();
	cout << pp->age << endl;

	Person& rp = bar3();
	cout << rp.age << endl;

	return 0;
}