/*
	friend function		// �ܺο��� ����� �Լ��� private ����� ���� ����
	friend class		// �ܺο��� ����� Ŭ������ private ����� ���� ����

	��ü����� ����� ����Ʈ�� �� �ֱ� ������ ����� �����ؾ���	
*/

#include<iostream>

using namespace std;

class Coord_2D {
	//
	friend void friend_func_Coor_2D(Coord_2D _k);
	friend class friend_class_Coor_2D;

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
};

class friend_class_Coor_2D {
public:
	void show(Coord_2D _k) {
		cout << "(" << _k.x << ", " << _k.y << ")" << endl;
	}
};

void friend_func_Coor_2D(Coord_2D _k) {
	cout << "(" << _k.x << ", " << _k.y << ")" << endl;
}

int main() {

	Coord_2D a(10, 10);

	a.showCoord();

	// class�� ����
	friend_class_Coor_2D f_a;
	f_a.show(a);

	// func�� ����
	friend_func_Coor_2D(a);

	return 0;
}