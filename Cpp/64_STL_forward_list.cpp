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

// forward_list(SLL) ���

#include<iostream>
#include<forward_list>
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
	forward_list<int> myfwdlist;

	// myfwdlist.push_back(3);
	// myfwdlist.push_back(4);
	// myfwdlist.push_back(5);	// SLL �̶� push_back()�� ����
	myfwdlist.push_front(5);
	myfwdlist.push_front(4);
	myfwdlist.push_front(3);
	myfwdlist.push_front(2);
	myfwdlist.push_front(1);	// 1 2 3 4 5

	// 2) �հ� ��
	cout << "forward_list front : " << myfwdlist.front() << endl;
	// cout << "list back  : " << myfwdlist.back() << endl;		// �ں��� �б� ����X

	// 3) �������
	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 4) �������
	// ���� X

	// 5) �߰��� ����	inser_after() ���
	auto loc = myfwdlist.cbegin();	// const begin()
	advance(loc, 1);
	// loc = next(loc); // loc + 1
	// loc = prev(loc); // loc - 1 // forward_list���� ����X

	myfwdlist.insert_after(loc, 100);	// �ش� ������ ������ġ�� ����

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 6) �߰��� ����	erase_after() ���
	loc = myfwdlist.cbegin();
	advance(loc, 4);
	myfwdlist.erase_after(loc);			// �ش� ������ ������ġ�� ����

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	return 0;
}