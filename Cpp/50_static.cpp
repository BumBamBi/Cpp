/*
static 멤버 변수
	객체와 상관없이 하나의 변수를 가리킴
	다른 객체에서 접근 가능
	객체 없이도 class로 접근 가능
	초기화는 따로 해줘야 함

const
	상수가 되어버림
	변수값 변경 불가


static 멤버 함수
	객체와 상관없이 존재
	static 함수는, static 변수만 변경 가능

*/

#include<iostream>

using namespace std;

class Car {
public:
	static int year;
	int month;

	void show() {
		cout << "year : " << year << endl;
	}
	static void showM() {
		// cout << "month  : " << month << endl;
		
		// static함수는 객체없이도 사용 가능하기 때문에,
		// static 함수가 사용하는 변수가 static이 아니라면, 혹시 모를 위험을 대비해서, 사용을 막아 둠
	}
	void change(int _y) {
		year = _y;
	}
	
};

// class접근으로, static 변수 초기화
int Car::year = 1;

int main() {

	//1
	Car c;
	c.show();

	Car d;
	d.show();

	cout << "year : " << Car::year << endl;

	// 10;
	Car::year = 10;

	c.show();
	d.show();
	cout << "year : " << Car::year << endl;

	// 100
	c.change(100);

	c.show();
	d.show();
	cout << "year : " << Car::year << endl;

	return 0;
}