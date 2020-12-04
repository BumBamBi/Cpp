/*
destructor - 소멸자
	객체가 사라질 때 실행
	클래스 이름에 ~ 를 붙여서 선언		-> ~Person
	동적메모리의 해재를 위하여 사용됨
*/

#include<iostream>

using namespace std;

class Car {
private:
	char* ptr;

public:
	Car() {
		cout << "생성자 호출" << endl;
		ptr = new char[3000000]; // 30mb
	}
	~Car(){
		cout << "소멸자 호출" << endl;
		delete[] ptr;
	}
};

int main() {

	cout << "start --------------" << endl;

	{
		Car c;
		// c가 생성된 구역이 끝나면 소멸하기 때문에, 여기서 소멸자 호출
		// 괄호과 없다면, return 이후에 호출
	}
	cout << "end ---------------- " << endl;

	return 0;
}