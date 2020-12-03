/*
	Virtual func

	부모로 자식에게 접근 가능

	오버로딩 안하고 하나의 함수로 만들 수 있다
	타입을 부모의 포인터하면, 자식들 모두 접근 가능


		- virtual func by reference
			reference변수에도 동일하게 작동함
		
		- virtual destructor
			부모/자식의 소멸자 호출시의 문제 해결 가능

		- pure virtual func
			virtual type func() = 0;의 형태
			부모가 pure virtual func가 있다면, 자식은 무조건 해당 메소드를 가지고 있어야 함
*/

#include<iostream>

using namespace std;

class A {
public:
	A() {
		cout << "A" << endl;
	}
	virtual ~A() {
		cout << "~A" << endl;
	}
	// 최상위 부모 함수가 virtual
	virtual void iam() {
		cout << "I am A" << endl;
	}
	
	// pure virtual func
	// virtual type func() = 0;의 형태
};

class AA : public A {
public:
	AA() {
		cout << "AA" << endl;
	}
	~AA() {
		cout << "~AA" << endl;
	}
	void iam() {
		cout << "I am AA" << endl;
	}
};

class AB : public A {
public:
	AB() {
		cout << "AB" << endl;
	}
	~AB() {
		cout << "~AB" << endl;
	}
	void iam() {
		cout << "I am AB" << endl;
	}
};


void doSomething(A* _p) {
	_p->iam();	// i am A
}


/* 기존 오버로딩

void doSomething(AA* _p) {
	_p->iam();	// i am AA
}
void doSomething(AB* _p) {
	_p->iam();	// i am AB
}
*/

int main() {
	
	A* pA = new AA();
	// A를 상속받은 AA객체의 A만을 가리키는 포인터 pA

	pA->iam();
	// AA의 A부분인 A의 메소드 출력
	// 부모가 virtual이면, AA의 메소드 출력

	pA = new AB;
	// pA는 A의 포인터임.
	// 따라서 A를 상속받은 AB객체의 A를 가리키는 포인터 pA

	pA->iam();
	// AB의 A부분인 A의 메소드 출력
	// 부모가 virtual이면, AB의 메소드 출력


	cout << "-----------" << endl;
	doSomething(new A);
	doSomething(new AA);
	doSomething(new AB);
	// 원랜 오버로딩으로 각각 만들어야했지만,
	// 이젠 virtual이기 떄문게 그냥 출력 가능



	// reference로도 동일하게 수행됨
	cout << "-----------" << endl;
	AA aa;
	AB ab;

	A& ra = aa;
	A& rb = ab;

	ra.iam();	// i am AA
	rb.iam();	// i am AB


	// 소멸자 부분에서 문제가 있을 수 있음
	cout << "-----------" << endl;

	A* p = new AA;
	delete p;
	// 원하는 건 A생성 AA생성 AA소멸 A소멸
	// 그러나 실제수행되는 건, A생성 AA생성 A소멸

	// 따라서, A의 소멸자를 virtual로 하면, AA의 소멸자가 먼저 실행되면서 원하는대로 수행됨
	// 이유 : AA가 소멸되면, AA를 생성하면서 만든 부모의 소멸자도 자동으로 호출

	cout << "-----------main 끝나면서 소멸자 호출-----------" << endl;
	return 0;
}