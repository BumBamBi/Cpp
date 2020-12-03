#include<iostream>

using namespace std;

void func_a(int a, int b, int c) {
	cout << a << b << c << endl;
}

void func_b(int a = 1, int b = 2, int c = 3) {
	cout << a << b << c << endl;
}


int main() {

	/*
	함수를 호출할 떄, 파라미터에 값을 미리 넣어주면, 필수로 안넣어줘도 됨
	그러나 인수가 3개일 때, 처음, 마지막을 default 로 하고 중간값을 필수로 하면,
	인자가 처음값인지 두번째 값인지 몰라서 안됨!!!
	*/

	func_a(1, 2, 3);
	func_b();

	return 0;

}