/*
	inheritance 상속------------------------------------------------------------------------------------------
		
		다른 class에 부모의 변수와 함수를 상속함
		
		상속받을 때 public으로 받으면,	부모의 public을 public으로 두고,
		private으로 받으면,				부모의 public을 private하게 둠
		
		부모의 private는 항상 private함 (단, protected로 선언시, 자식에서 접근 가능)

			이유 -> 밑의 상속받는 종류 3가지에 설명됨

		private vs protected

			private는 상속받은 자식조차 접근 불가
			protected는 상속받은 자식은 접근 가능

	상속받은 종류 4가지------------------------------------------------------------------------------------------
	
		1. public
		2. protected
		3. private(default)

		중에서, 상속받을 때 해당 구간(private: , public: ...)을 비교해서 더 강력한 보안법으로 상속받음.

		ex)	부모 private구간 + public으로 상속	-> private
			부모 public구간 + private로 상속	-> private
			부모 protected구간 + private로 상속	-> private

	method Overriding------------------------------------------------------------------------------------------
		
		부모의 함수이름과 같이 만들면, 덮어 씌워서 작동하도록 함
		
		ex) 2D, 3D의 좌표 출력하는 메소드의 이름이 다를 필요가 없음


		ex) 3D, 2D
		
			3D 클래스는 2D 클래스의 내용을 포함한다. (xy축, xy축 보여주기 등등..)
			2D의 모든 변수와 함수를 3D 상속함
		
			물론 코드 복붙하면, 똑같이 사용 가능하지만,
			나중에 코드 수정하면, 수정한 부분 전부 수정이 필요함


	method Overriden------------------------------------------------------------------------------------------

		Overriding 된 자식의 메소드가 아닌, 부모의 메소드를 호출하는 것

*/

#include<iostream>

using namespace std;

// 부모 ----------------------------------------------------------

class Coord_2D {
protected:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) {
		x = _x;
		y = _y;
		cout << "<2D 생성>" << endl;
	}
	~Coord_2D() {
		cout << "<2D 소멸>" << endl;
	}
	void showCoord() {
		cout << x << ", " << y << endl;
	}
};
// ----------------------------------------------------------



// 자식 ----------------------------------------------------------

// 부모에게 상속받은 내용을 public으로 둠
// public을 지우면 부모에게 상속받은 내용을 private으로 둠
class Coord_3D : public Coord_2D {
private:
	int z;
public:
	Coord_3D(int _x, int _y, int _z) : Coord_2D(_x, _y) {
		// 부모의 생성자를 이용
		z = _z;
		cout << "<3D 생성>" << endl;
	}
	~Coord_3D() {
		cout << "<3D 소멸>" << endl;
	}
	void showCoord_3D() {
		//showCoord();
		cout << x << ", " << y << ", ";		// 부모의 protected 멤버에 접근 가능 (private 이면 접근 불가)
		cout << ", " << z << endl;
	}
	// overriding
	void showCoord() {
		cout << x << ", " << y << ", " << z << endl;
	}
};
// ----------------------------------------------------------




int main() {

	// 자식 생성/소멸 --------------------------------------------------
	cout << "---자식 생성/소멸---" << endl;
	{
		// 부모 생성 - 자식 생성 - 자식 소멸 - 부모 소멸
		Coord_3D a(10, 10, 10);
		a.showCoord_3D();
	}

	// prvate, protected의 외부접근 --------------------------------------------------
	// a.x = 10;	// private, proteced 둘 다 외부에서는 접근 불가능


	// 상속받을 때의 public/private --------------------------------------------------

	// public			// class Coord_3D : public Coord_2D {}
	cout << "---상속 받을 때 public---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();
	}

	// private			// class Coord_3D : Coord_2D {}
	cout << "---상속 받을 때 private---" << endl;
	{
		Coord_3D a(10, 10, 10);
		//a.showCoord();		// 사용 불가 (부모의 public이 private이기 때문)
	}

	// overriding --------------------------------------------------
	cout << "---overriding---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();
		// 3D class이므로, 3D의 showCoord 메소드가 사용
	}

	// overriden --------------------------------------------------
	cout << "---overriden---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();

		a.Coord_2D::showCoord();
		// overriden 된 메소드 호출 가능 (public으로 자식을 생성해야함)
		// class Coord_3D : public Coord_2D
	}

	return 0;
}