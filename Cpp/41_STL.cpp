/*
STL	: C++ 사용자를 위한 라이브러리

컨테이너(vector, stack), 반복자(iterator), 알고리즘(sort), fuctor

class array
- 크기가 결정되어있음
- 속도가 빠름
- 배열과 동일하지만, 여러 함수가 제공됨
- std::array<int, 3> a;
- array.front(), array.back(), .size(), .at(), .begin(), .end() 는 vector와 동일
- reverse_iterator : rbegin(), rend() -> interator의 역순
- fill(value) : value로 모두 채우기
- swap(array) : type과 size가 동일하면, array끼리 바꿔치기 가능

*/

#include<iostream>
#include<array>

using namespace std;

int main() {
	array<int, 3> a = { 7,8,9 };


	cout << endl << "1. for loop" << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << " " << i;
	}

	cout << endl << "2. at()" << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << " " << a.at(i);
	}

	cout << endl << "3. auto" << endl;
	for (auto& i : a) {
		cout << " " << i;
	}

	cout << endl << "4. iterator" << endl;
	for (auto i = a.begin(); i < a.end(); i++) {
		cout << " " << *i;
	}

	cout << endl << "5. reverse iterator" << endl;
	for (auto i = a.rbegin(); i < a.rend(); i++) {
		cout << " " << *i;
	}

	cout << endl << endl;
	cout << "front : " << a.front() << endl;
	cout << "back : " << a.back() << endl;

	
	cout << endl << endl;
	cout << "fill(10)" << endl;
	a.fill(10);
	for (auto& i : a) {
		cout << " " << i;
	}

	cout << endl << "swap()" << endl;
	array<int, 3> b = { 1,1,1 };
	a.swap(b);
	for (auto& i : a) {
		cout << " " << i;
	}
	cout << endl;

	return 0;
}