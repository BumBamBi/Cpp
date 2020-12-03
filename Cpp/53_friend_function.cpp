/*
	friend function		// 외부에서 선언된 함수로 private 멤버에 접근 가능
	friend class		// 외부에서 선언된 클래스로 private 멤버에 접근 가능

	객체기반의 기반을 무너트릴 수 있기 때문에 사용을 지양해야함	
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

	// class로 접근
	friend_class_Coor_2D f_a;
	f_a.show(a);

	// func로 접근
	friend_func_Coor_2D(a);

	return 0;
}