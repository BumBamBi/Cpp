/*
1) const int* pa
	
	pa가 가리키는 위치에 있는 변수의 값을 바꿀 수 없다 (*pa값 변경 x)

2) int* const pa

	pa에 저장된 주소 값을 바꿀 수 없다 (pa값 변경 x)

3) const int* const pa

	1, 2 모두 적용

*/

#include<iostream>

using namespace std;

int main() {
	
	int a = 10;
	int* pa = nullptr;
	//const int* pa = nullptr;	// *pa = 35에서 에러
	//int* const pa = nullptr;	// pa = &a 에서 에러



	pa = &a;

	cout << *pa << endl;

	*pa = 35;

	cout << *pa << endl;

	return 0;
}