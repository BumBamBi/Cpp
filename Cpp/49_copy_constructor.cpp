/*
copy constructor(생성자)

	새 객체를 만들 때,다른 객체의 내용을 복사해서 만드는 경우 자동으로 호출됨	Car d = c;
	
	컴파일러에 의해 자동으로 이루어짐
	모든 멤버변수를 자동 복사

	별도로 만들 수도 있음
	단, 멤버변수복사를 모두 만들어줘야 함


shallow copy
	객체에 메모리 할당시, 모두 같은 공간을 가리킴

deep copy (copy construcor를 이용)
	객체에 메모리 할당시, 객체마다 다른 공간을 가짐
*/

#include<iostream>

using namespace std;

class Car {
private:
	int year = 2020;
	char* ptr;
public:
	Car(int _y) {
		cout << "생성자 호출" << endl;
		char* ptr[3000000]; //30mb;
	}
	Car(Car& _c) {
		cout << "copy 생성자 호출" << endl;
		year = _c.year;

		ptr = new char[300000]; // 또 다른 30mb 공간을 할당 받음
	}
	~Car() {
		delete[] ptr;
	}

	void show() {
		cout << "year : " << year << endl;
	}
};

int main() {

	Car c(2010);
	c.show();

	// c를 복사하여 새로운 객체 d를 만듦
	// 이것이 copy constructor
	// 따라서 "생성자 호출" 문구가 출력x,
	Car d = c;
	d.show();


	// 메모리 관련 부분

	Car a(100);

	{
		// b는 괄호를 끝내면서 소멸하고, 그러면서 a가 가리키던 30mb 부분도 할당해제 시킴	== shallow copy
		// a의 30mb가 벙찌는 상황이 발생
		// 따라서, cpoy constructor를 통해 30mb를 새로 할당받는 부분을 만듦					== deep copy
		Car b = a;
	}

	return 0;
}