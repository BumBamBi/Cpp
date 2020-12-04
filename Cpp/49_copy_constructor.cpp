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
		ptr = new char[30000]; //3mb;
		ptr[0] = 'a';
	}
	Car(Car& _c) {
		cout << "copy ������ ȣ��" << endl;
		year = _c.year;

		// ptr = _c.ptr;
		ptr = new char[30000]; // �� �ٸ� 3mb ������ �Ҵ� ����
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
		Car b = a;

		// ptr = _c.ptr�� �ߴٸ�, (shallow copy)
		// b�� ��ȣ�� �����鼭 �Ҹ��� ��, a�� ����Ű�� 3mb �κе� �Ҵ����� ��Ŵ	
		// ����, a�� 3mb�� ����� ��Ȳ�� �߻�

		// ptr = new chaar[30000]�� ���ؼ�, (deep copy)
		//  3mb�� ���� �Ҵ�޴� �κ��� ���� ���Ͱ��� ��Ȳ�� �Ȼ���� ��
	}

	return 0;
}