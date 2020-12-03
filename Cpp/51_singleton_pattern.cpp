/*
Design pattern
	
	singleton pattern
		클래스로부터 오직 한 개의 객체만 생성되도록 하는 방법
*/

#include<iostream>

using namespace std;

class Car {
private:
	Car() {}
	static Car* instance;
public:
	static Car* getInstance() {
		if (instance != nullptr) {
			return instance;
		}
		else {
			instance = new Car();
			return instance;
		}
	}
};

Car* Car::instance = nullptr;

int main() {

	// 생성자를 private으로 만들었기 때문에, 선언 불가
	// Car c;	
	// Car c = new Car();

	// 따라서, getInstance를 통하여 Car* instance를 만들어서, 객체를 만드는 방법 밖에 없다.
	Car* c = Car::getInstance();
	cout << "c addr : " << c << endl;

	// 전부 같은 결과 주소값이 나옴
	Car* d = Car::getInstance();
	cout << "d addr : " << d << endl;
	Car* e = Car::getInstance();
	cout << "e addr : " << e << endl;

	return 0;
}