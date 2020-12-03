/*
STL	: C++ ����ڸ� ���� ���̺귯��

�����̳�(vector, stack), �ݺ���(iterator), �˰���(sort), fuctor

class array
- ũ�Ⱑ �����Ǿ�����
- �ӵ��� ����
- �迭�� ����������, ���� �Լ��� ������
- std::array<int, 3> a;
- array.front(), array.back(), .size(), .at(), .begin(), .end() �� vector�� ����
- reverse_iterator : rbegin(), rend() -> interator�� ����
- fill(value) : value�� ��� ä���
- swap(array) : type�� size�� �����ϸ�, array���� �ٲ�ġ�� ����

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