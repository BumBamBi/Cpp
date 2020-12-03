/*
copy constructor(������)

	�� ��ü�� ���� ��,�ٸ� ��ü�� ������ �����ؼ� ����� ��� �ڵ����� ȣ���	Car d = c;
	
	�����Ϸ��� ���� �ڵ����� �̷����
	��� ��������� �ڵ� ����

	������ ���� ���� ����
	��, ����������縦 ��� �������� ��


shallow copy
	��ü�� �޸� �Ҵ��, ��� ���� ������ ����Ŵ

deep copy (copy construcor�� �̿�)
	��ü�� �޸� �Ҵ��, ��ü���� �ٸ� ������ ����
*/

#include<iostream>

using namespace std;

class Car {
private:
	int year = 2020;
	char* ptr;
public:
	Car(int _y) {
		cout << "������ ȣ��" << endl;
		char* ptr[3000000]; //30mb;
	}
	Car(Car& _c) {
		cout << "copy ������ ȣ��" << endl;
		year = _c.year;

		ptr = new char[300000]; // �� �ٸ� 30mb ������ �Ҵ� ����
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

	// c�� �����Ͽ� ���ο� ��ü d�� ����
	// �̰��� copy constructor
	// ���� "������ ȣ��" ������ ���x,
	Car d = c;
	d.show();


	// �޸� ���� �κ�

	Car a(100);

	{
		// b�� ��ȣ�� �����鼭 �Ҹ��ϰ�, �׷��鼭 a�� ����Ű�� 30mb �κе� �Ҵ����� ��Ŵ	== shallow copy
		// a�� 30mb�� ����� ��Ȳ�� �߻�
		// ����, cpoy constructor�� ���� 30mb�� ���� �Ҵ�޴� �κ��� ����					== deep copy
		Car b = a;
	}

	return 0;
}