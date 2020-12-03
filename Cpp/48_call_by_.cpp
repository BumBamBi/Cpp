/*
call by	value
		reference adress
		reference variable
*/

#include<iostream>

using namespace std;

class Car {
private:
	int year;
public:
	Car(int _y) {
		year = _y;
	}
	void show() {
		cout << "year : " << year << endl;
	}
	void change(int _y) {
		year = _y;
	}
};

void changeCarYear1(Car _c) {
	_c.change(10);
}

void changeCarYear2(Car* _c) {
	_c->change(10);
}

void changeCarYearRef(Car& _c) {
	_c.change(10);
}

int main() {
	Car c(2010);
	c.show();

	c.change(2020);
	c.show();

	// ���纻 �ѱ��
	changeCarYear1(c);
	cout << "1-";
	c.show();

	// �����ͷ� �ѱ��
	changeCarYear2(&c);
	cout << "2-";
	c.show();

	// Ref�� �ѱ��
	changeCarYearRef(c);
	cout << "3-";
	c.show();


	return 0;
}