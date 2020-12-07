/*
	Std template library

	국제표준에서 제정, 구현은 각자 해야 함

	< container > : 데이터를 저장하는 틀
	- 배열 기반
		* vector
		* array
		* deque(덱)
	- 메모리 기반 (index에 의한 random access 불가)
		* list : DLL 
		* forward_list : SLL 
	
	< iterator >
	- 포인터 형식
	- container 안의 데이터에 대해 통일된 접근 방법을 제공
*/

// deque(덱) 사용
// list(DLL) 사용법도 동일함

#include<iostream>
#include<deque>
#include<iterator>

using namespace std;

int main() {
	/*
		1) 1,2,3,4,5 를 순서대로 넣음
		2) 맨 앞과 끝의 요소에 접근
		3) 순서대로 접근
		4) 역순으로 접근
		5) 중간에 삽입
		6) 중간에 삭제
	*/

	// 1) 생성
	deque<int> mydeque;

	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(2);
	mydeque.push_front(1);	// 1 2 3 4 5

	// 2) 앞과 끝
	cout << "deque front : " << mydeque.front() << endl;
	cout << "deque back  : " << mydeque.back() << endl;

	// 3) 순서대로
	for (auto e = mydeque.begin(); e != mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 4) 역순대로
	for (auto e = mydeque.rbegin(); e != mydeque.rend(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 5) 중간에 삽입
	auto loc = mydeque.cbegin();	// const begin()
	advance(loc, 1);
	// loc = next(loc); // loc + 1
	// loc = prev(loc); // loc - 1

	mydeque.insert(loc, 100);

	for (auto e = mydeque.begin(); e != mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 6) 중간에 제거
	loc = mydeque.cbegin();
	advance(loc, 4);
	mydeque.erase(loc);

	for (auto e = mydeque.begin(); e != mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	return 0;
}