/*
static ��� ����
	��ü�� ������� �ϳ��� ������ ����Ŵ
	�ٸ� ��ü���� ���� ����
	��ü ���̵� class�� ���� ����
	�ʱ�ȭ�� ���� ����� ��

const
	����� �Ǿ����
	������ ���� �Ұ�


static ��� �Լ�
	��ü�� ������� ����
	static �Լ���, static ������ ���� ����

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
		
		// static�Լ��� ��ü���̵� ��� �����ϱ� ������,
		// static �Լ��� ����ϴ� ������ static�� �ƴ϶��, Ȥ�� �� ������ ����ؼ�, ����� ���� ��
	}
	void change(int _y) {
		year = _y;
	}
	
};

// class��������, static ���� �ʱ�ȭ
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