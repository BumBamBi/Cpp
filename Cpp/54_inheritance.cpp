/*
	inheritance ���------------------------------------------------------------------------------------------
		
		�ٸ� class�� �θ��� ������ �Լ��� �����
		
		��ӹ��� �� public���� ������,	�θ��� public�� public���� �ΰ�,
		private���� ������,				�θ��� public�� private�ϰ� ��
		
		�θ��� private�� �׻� private�� (��, protected�� �����, �ڽĿ��� ���� ����)

			���� -> ���� ��ӹ޴� ���� 3������ �����

		private vs protected

			private�� ��ӹ��� �ڽ����� ���� �Ұ�
			protected�� ��ӹ��� �ڽ��� ���� ����

	��ӹ��� ���� 4����------------------------------------------------------------------------------------------
	
		1. public
		2. protected
		3. private(default)

		�߿���, ��ӹ��� �� �ش� ����(private: , public: ...)�� ���ؼ� �� ������ ���ȹ����� ��ӹ���.

		ex)	�θ� private���� + public���� ���	-> private
			�θ� public���� + private�� ���	-> private
			�θ� protected���� + private�� ���	-> private

	method Overriding------------------------------------------------------------------------------------------
		
		�θ��� �Լ��̸��� ���� �����, ���� ������ �۵��ϵ��� ��
		
		ex) 2D, 3D�� ��ǥ ����ϴ� �޼ҵ��� �̸��� �ٸ� �ʿ䰡 ����


		ex) 3D, 2D
		
			3D Ŭ������ 2D Ŭ������ ������ �����Ѵ�. (xy��, xy�� �����ֱ� ���..)
			2D�� ��� ������ �Լ��� 3D �����
		
			���� �ڵ� �����ϸ�, �Ȱ��� ��� ����������,
			���߿� �ڵ� �����ϸ�, ������ �κ� ���� ������ �ʿ���


	method Overriden------------------------------------------------------------------------------------------

		Overriding �� �ڽ��� �޼ҵ尡 �ƴ�, �θ��� �޼ҵ带 ȣ���ϴ� ��

*/

#include<iostream>

using namespace std;

// �θ� ----------------------------------------------------------

class Coord_2D {
protected:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) {
		x = _x;
		y = _y;
		cout << "<2D ����>" << endl;
	}
	~Coord_2D() {
		cout << "<2D �Ҹ�>" << endl;
	}
	void showCoord() {
		cout << x << ", " << y << endl;
	}
};
// ----------------------------------------------------------



// �ڽ� ----------------------------------------------------------

// �θ𿡰� ��ӹ��� ������ public���� ��
// public�� ����� �θ𿡰� ��ӹ��� ������ private���� ��
class Coord_3D : public Coord_2D {
private:
	int z;
public:
	Coord_3D(int _x, int _y, int _z) : Coord_2D(_x, _y) {
		// �θ��� �����ڸ� �̿�
		z = _z;
		cout << "<3D ����>" << endl;
	}
	~Coord_3D() {
		cout << "<3D �Ҹ�>" << endl;
	}
	void showCoord_3D() {
		//showCoord();
		cout << x << ", " << y << ", ";		// �θ��� protected ����� ���� ���� (private �̸� ���� �Ұ�)
		cout << ", " << z << endl;
	}
	// overriding
	void showCoord() {
		cout << x << ", " << y << ", " << z << endl;
	}
};
// ----------------------------------------------------------




int main() {

	// �ڽ� ����/�Ҹ� --------------------------------------------------
	cout << "---�ڽ� ����/�Ҹ�---" << endl;
	{
		// �θ� ���� - �ڽ� ���� - �ڽ� �Ҹ� - �θ� �Ҹ�
		Coord_3D a(10, 10, 10);
		a.showCoord_3D();
	}

	// prvate, protected�� �ܺ����� --------------------------------------------------
	// a.x = 10;	// private, proteced �� �� �ܺο����� ���� �Ұ���


	// ��ӹ��� ���� public/private --------------------------------------------------

	// public			// class Coord_3D : public Coord_2D {}
	cout << "---��� ���� �� public---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();
	}

	// private			// class Coord_3D : Coord_2D {}
	cout << "---��� ���� �� private---" << endl;
	{
		Coord_3D a(10, 10, 10);
		//a.showCoord();		// ��� �Ұ� (�θ��� public�� private�̱� ����)
	}

	// overriding --------------------------------------------------
	cout << "---overriding---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();
		// 3D class�̹Ƿ�, 3D�� showCoord �޼ҵ尡 ���
	}

	// overriden --------------------------------------------------
	cout << "---overriden---" << endl;
	{
		Coord_3D a(10, 10, 10);
		a.showCoord();

		a.Coord_2D::showCoord();
		// overriden �� �޼ҵ� ȣ�� ���� (public���� �ڽ��� �����ؾ���)
		// class Coord_3D : public Coord_2D
	}

	return 0;
}