/*
	Multiple inheritance ���߻��

	�ΰ� �̻��� �θ� Ŭ������ ���� �� �ִ�.

	�������� ����

*/

#include<iostream>

using namespace std;

class Pa {
public:
	int x;

	Pa(int _x) {
		x = _x;
		cout << "Pa ����" << endl;
	}
};

class Pb {
public:
	int x;
	int y;

	Pb(int _y) {
		x = 90;
		y = _y;
		cout << "Pb ����" << endl;
	}
};

class Ca : public Pa, public Pb{
public:
	Ca(int _x, int _y) : Pa(_x), Pb(_y) {
		cout << "Ca ����" << endl;
	}
};

int main() {

	Ca child_a(10, 20);

	cout << "--------------------" << endl;
	cout << "x : " << child_a.Pa::x << endl;
	cout << "x : " << child_a.Pb::x << endl;
	cout << "y : " << child_a.y << endl;

	// �θ��� ���� �̸��� ������, :: �� ����

	return 0;
}