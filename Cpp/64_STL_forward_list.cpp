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

// forward_list(SLL) 사용

#include<iostream>
#include<forward_list>
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
	forward_list<int> myfwdlist;

	// myfwdlist.push_back(3);
	// myfwdlist.push_back(4);
	// myfwdlist.push_back(5);	// SLL 이라 push_back()이 없음
	myfwdlist.push_front(5);
	myfwdlist.push_front(4);
	myfwdlist.push_front(3);
	myfwdlist.push_front(2);
	myfwdlist.push_front(1);	// 1 2 3 4 5

	// 2) 앞과 끝
	cout << "forward_list front : " << myfwdlist.front() << endl;
	// cout << "list back  : " << myfwdlist.back() << endl;		// 뒤부터 읽기 제공X

	// 3) 순서대로
	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 4) 역순대로
	// 제공 X

	// 5) 중간에 삽입	inser_after() 사용
	auto loc = myfwdlist.cbegin();	// const begin()
	advance(loc, 1);
	// loc = next(loc); // loc + 1
	// loc = prev(loc); // loc - 1 // forward_list에선 지원X

	myfwdlist.insert_after(loc, 100);	// 해당 포인터 다음위치에 삽입

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 6) 중간에 제거	erase_after() 사용
	loc = myfwdlist.cbegin();
	advance(loc, 4);
	myfwdlist.erase_after(loc);			// 해당 포인터 다음위치에 제거

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	return 0;
}