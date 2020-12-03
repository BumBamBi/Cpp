/*
	Multiple inheritance 다중상속

	두개 이상의 부모 클래스가 생길 수 있다.

	권장하지 않음

*/

#include<iostream>

using namespace std;

class Pa {
public:
	int x;

	Pa(int _x) {
		x = _x;
		cout << "Pa 생성" << endl;
	}
};

class Pb {
public:
	int x;
	int y;

	Pb(int _y) {
		x = 90;
		y = _y;
		cout << "Pb 생성" << endl;
	}
};

class Ca : public Pa, public Pb{
public:
	Ca(int _x, int _y) : Pa(_x), Pb(_y) {
		cout << "Ca 생성" << endl;
	}
};

int main() {

	Ca child_a(10, 20);

	cout << "--------------------" << endl;
	cout << "x : " << child_a.Pa::x << endl;
	cout << "x : " << child_a.Pb::x << endl;
	cout << "y : " << child_a.y << endl;

	// 부모의 변수 이름이 같으면, :: 로 구분

	return 0;
}