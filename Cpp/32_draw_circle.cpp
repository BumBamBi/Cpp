#include <windows.h>
#include <iostream>
using namespace std;

//간단한 객체의 구현과 그림 그리기
class MY_CIRCLE
{
public:
	int left, right, top, bottom;

	MY_CIRCLE(int l, int t, int r, int b) : left(l), top(t), right(r), bottom(b)
	{}

	void do_draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, left, top, right, bottom);
	}

	MY_CIRCLE Clone()
	{
		return *this;
	}

	MY_CIRCLE& CloneR()
	{
		return *this;
	}

	MY_CIRCLE* CloneP()
	{
		return this;
	}
};

int main()
{
	using namespace std;

	MY_CIRCLE c1(150, 150, 180, 180);
	MY_CIRCLE c2(200, 200, 300, 300);

	c1.do_draw();
	c2.do_draw();

	/*
	cout << "c1 address: " << &c1 << endl;
	cout << "c2 address: " << &c2 << endl;

	MY_CIRCLE c1c = c1.Clone();
	MY_CIRCLE c2c = c2.Clone();

	cout << "c1c address: " << &c1c << endl;
	cout << "c2c address: " << &c2c << endl;

	c1c.left = 50;

	cout << "c1c left: " << c1c.left << endl;
	*/

	return 0;
}