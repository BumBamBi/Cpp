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
		ptr = new char[30000]; //3mb;
		ptr[0] = 'a';
	}
	Car(Car& _c) {
		cout << "copy 생성자 호출" << endl;
		year = _c.year;

		// ptr = _c.ptr;
		ptr = new char[30000]; // 또 다른 3mb 공간을 할당 받음
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
		Car b = a;

		// ptr = _c.ptr로 했다면, (shallow copy)
		// b가 괄호를 끝내면서 소멸할 때, a가 가리키던 3mb 부분도 할당해제 시킴	
		// 따라서, a의 3mb가 벙찌는 상황이 발생

		// ptr = new chaar[30000]을 통해서, (deep copy)
		//  3mb를 새로 할당받는 부분을 만들어서 위와같은 상황이 안생기게 함
	}

	return 0;
}