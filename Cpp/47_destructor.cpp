/*
destructor - �Ҹ���
	��ü�� ����� �� ����
	Ŭ���� �̸��� ~ �� �ٿ��� ����		-> ~Person
	�����޸��� ���縦 ���Ͽ� ����
*/

#include<iostream>

using namespace std;

class Car {
private:
	char* ptr;

public:
	Car() {
		cout << "������ ȣ��" << endl;
		ptr = new char[3000000]; // 30mb
	}
	~Car(){
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] ptr;
	}
};

int main() {

	cout << "start --------------" << endl;

	{
		Car c;
		// c�� ������ ������ ������ �Ҹ��ϱ� ������, ���⼭ �Ҹ��� ȣ��
		// ��ȣ�� ���ٸ�, return ���Ŀ� ȣ��
	}
	cout << "end ---------------- " << endl;

	return 0;
}