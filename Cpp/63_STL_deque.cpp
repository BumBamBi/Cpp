/*
	Std template library

	����ǥ�ؿ��� ����, ������ ���� �ؾ� ��

	< container > : �����͸� �����ϴ� Ʋ
	- �迭 ���
		* vector
		* array
		* deque(��)
	- �޸� ��� (index�� ���� random access �Ұ�)
		* list : DLL 
		* forward_list : SLL 
	
	< iterator >
	- ������ ����
	- container ���� �����Ϳ� ���� ���ϵ� ���� ����� ����
*/

// deque(��) ���
// list(DLL) ������ ������

#include<iostream>
#include<deque>
#include<iterator>

using namespace std;

int main() {
	/*
		1) 1,2,3,4,5 �� ������� ����
		2) �� �հ� ���� ��ҿ� ����
		3) ������� ����
		4) �������� ����
		5) �߰��� ����
		6) �߰��� ����
	*/

	// 1) ����
	deque<int> mydeque;

	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(2);
	mydeque.push_front(1);	// 1 2 3 4 5

	// 2) �հ� ��
	cout << "deque front : " << mydeque.front() << endl;
	cout << "deque back  : " << mydeque.back() << endl;

	// 3) �������
	for (auto e = mydeque.begin(); e != mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 4) �������
	for (auto e = mydeque.rbegin(); e != mydeque.rend(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 5) �߰��� ����
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

	// 6) �߰��� ����
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