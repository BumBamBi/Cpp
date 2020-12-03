#include<iostream>

using namespace std;

const int& func_a(int& n) {

	n += 10;
	return n;
}

int main() {

	/*
	1. int func(int)		-> 일반적인 함수 사용법(다만 3번처럼 int& b = func(int) 형식이면 문제 생김)
	2. int func(int&)		-> 잘 안씀
	
	3. int& func(int)		-> int& b = func(int) 형식이면 이미 해제된곳을 참조해서, b는 이상한 값이 나옴
	4. int& func(int&)		-> 주로 사용

	5. const int& func(int&)	-> func_a(k) = 1000; 이 가능해지므로, const를 붙혀서 그러지 못하도록 함
	*/

	int k = 10;
	
	int b = func_a(k);

	return 0;
}