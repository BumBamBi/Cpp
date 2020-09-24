#include<iostream>

using namespace std;

void func(int& rn) {
	// 참조변수를 사용 = 포인터처럼 사용됨(그러나 포인터의 위험성은 사용x)
	rn = 100;	
	return;
}

int main_27() {
	
	/*
	reference var
	int a;
	int& ra = a; 했을 때,
	a말고 ra로도 접근 가능(값이 바뀌면 같이 바뀜)
	*/

	int n = 10;

	cout << n << endl;

	func(n);

	cout << n << endl;

	return 0;
}