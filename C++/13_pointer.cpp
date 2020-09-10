#include<iostream>

using namespace std;

int main_13() {

	int* pi = new int;	// int를 저장할 공간을 만들어서, 그것을 가리키는 pi 생성

	*pi = 10;
	cout << *pi << endl;

	*pi = 20;
	cout << *pi << endl;

	delete pi;			// new로 할당받은 공간을 제거

	return 0;
}