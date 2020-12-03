/*
	operator overloading

	+, -
	==, !=
	++, --
			y = ++x		y = x+1
			y = x++		y = x, x+1


	�̷� �����ڿ� �߰� ����� �ִ� ��
*/

#include<iostream>

using namespace std;

class Coord_2D {
private:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void showCoord() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	// �Ϲ������� �Լ��� ���� ����ϴ� ��� (���������� ����)
	Coord_2D addCoord(Coord_2D& _k) {
		Coord_2D temp(x + _k.x, y + _k.y);
		return temp;
	}
	// operator overloading (�� �Լ��� ������ �Ȱ���)			this + _k = (Coord_2D) ó�� �����
	Coord_2D operator+(Coord_2D& _k) {
		Coord_2D temp(x + _k.x, y + _k.y);
		return temp;
	}
	bool operator==(Coord_2D& _k) {
		return ((x == _k.x) && (y == _k.y));
	}
	bool operator!=(Coord_2D& _k) {
		// return ((x != _k.x) || (y != _k.y));
		return !(*this == _k);	// == ������ �̿�
	}
	// ++x		��ȯ���� reference, �Ķ����()
	Coord_2D& operator++() {
		x += 1;
		y += 1;
		return *this;
	}
	// x++		��ȯ���� �ƹ��͵�,  �Ķ����(int)
	Coord_2D operator++(int) {
		Coord_2D temp = *this;

		x += 1;
		y += 1;

		return temp;
	}
};

int main() {

	Coord_2D a(10, 10);
	Coord_2D b(20, 20);

	// �տ���----------------------------------------------------------------------------------

	// �Ϲ������� �Լ��� ���� ����ϴ� ���
	Coord_2D c = a.addCoord(b);				// c = a + b
	Coord_2D d = a.addCoord(b).addCoord(c);	// d = a + b + c

	// operator overloading
	Coord_2D e = a + b;
	Coord_2D f = a + b + c;


	// �� ����----------------------------------------------------------------------------------
	if (d == f) {
		cout << "== same" << endl;
	}
	else {
		cout << "== difrrent" << endl;
	}

	if (d != f) {
		cout << "!= difrrent" << endl;
	}
	else {
		cout << "!= same" << endl;
	}

	// ���� ����----------------------------------------------------------------------------------
	cout << "--- a ---" << endl;
	a.showCoord();
	++a;
	++(++a);	// ��ȯ���� ���۷����� ���ϸ�, �� ������ �ѹ��� ����� (�Լ� ȣ���ϰ� ���� ������ϱ�)
	a.showCoord();

	cout << "--- b ---" << endl;
	b.showCoord();
	b++;
	// (b++)++	�̷����� ������ �� ���� (������ ������, ó���� �ȵ�)
	// b += 1;	operator overloading�� ���� �ʾƼ� ��� �Ұ�
	b.showCoord();


	return 0;
}