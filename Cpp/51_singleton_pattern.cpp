/*
Design pattern
	
	singleton pattern
		Ŭ�����κ��� ���� �� ���� ��ü�� �����ǵ��� �ϴ� ���
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

	// �����ڸ� private���� ������� ������, ���� �Ұ�
	// Car c;	
	// Car c = new Car();

	// ����, getInstance�� ���Ͽ� Car* instance�� ����, ��ü�� ����� ��� �ۿ� ����.
	Car* c = Car::getInstance();
	cout << "c addr : " << c << endl;

	// ���� ���� ��� �ּҰ��� ����
	Car* d = Car::getInstance();
	cout << "d addr : " << d << endl;
	Car* e = Car::getInstance();
	cout << "e addr : " << e << endl;

	return 0;
}