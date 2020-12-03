/*
	operator overloading

	+, -
	==, !=
	++, --
			y = ++x		y = x+1
			y = x++		y = x, x+1


	이런 연산자에 추가 기능을 넣는 것
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
	// 일반적으로 함수를 만들어서 사용하는 방법 (직관적이진 않음)
	Coord_2D addCoord(Coord_2D& _k) {
		Coord_2D temp(x + _k.x, y + _k.y);
		return temp;
	}
	// operator overloading (위 함수와 내용은 똑같음)			this + _k = (Coord_2D) 처럼 실행됨
	Coord_2D operator+(Coord_2D& _k) {
		Coord_2D temp(x + _k.x, y + _k.y);
		return temp;
	}
	bool operator==(Coord_2D& _k) {
		return ((x == _k.x) && (y == _k.y));
	}
	bool operator!=(Coord_2D& _k) {
		// return ((x != _k.x) || (y != _k.y));
		return !(*this == _k);	// == 연산자 이용
	}
	// ++x		반환값에 reference, 파라미터()
	Coord_2D& operator++() {
		x += 1;
		y += 1;
		return *this;
	}
	// x++		반환값에 아무것도,  파라미터(int)
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

	// 합연산----------------------------------------------------------------------------------

	// 일반적으로 함수를 만들어서 사용하는 방법
	Coord_2D c = a.addCoord(b);				// c = a + b
	Coord_2D d = a.addCoord(b).addCoord(c);	// d = a + b + c

	// operator overloading
	Coord_2D e = a + b;
	Coord_2D f = a + b + c;


	// 비교 연산----------------------------------------------------------------------------------
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

	// 증감 연산----------------------------------------------------------------------------------
	cout << "--- a ---" << endl;
	a.showCoord();
	++a;
	++(++a);	// 반환값에 레퍼런스를 안하면, 이 연산이 한번만 수행됨 (함수 호출하고 값이 사라지니까)
	a.showCoord();

	cout << "--- b ---" << endl;
	b.showCoord();
	b++;
	// (b++)++	이런식은 존재할 수 없음 (후위의 후위라서, 처리가 안됨)
	// b += 1;	operator overloading을 하지 않아서 사용 불가
	b.showCoord();


	return 0;
}