#include<iostream>

using namespace std;

//<���� c��� struct ���>
/* 
struct Node {
	int n;
	struct Node* next;
};

struct Node* head = 0;

void add2SLL(struct Node* _new_one) {
	if (head == 0) {
		head = _new_one;
		return;
	}
	else {
		struct Node* temp = head;
		while (temp->next != 0) {
			temp = temp->next;
		}
		temp->next = _new_one;
	}
}
*/

// class ����
// ������(constructor)	: ��ü�� ������� �� '�ڵ�����' ����Ǵ� �Լ�(��ȯ���� ����)
//						  �� �Լ��� Ŭ���� �̸��� ������ �̸��� ����
//						  ��ü�� ������� ��, �ʱ�ȭ ���� ����
class Node {
public:
	int n;
	Node* next;

	// ������
	Node(int v) : n(v), next(NULL) {
		// �̷������� �����ٰ� �ٷ� �ʱ�ȭ �ص� ��
	}

	void showN() {
		cout << "n is : " << n << endl;
	}
};

Node* head = 0;

int main() {

	/*
	class A{
		int a;
		int b;

		void showA(){
			cout << a << endl;
		}
	}
	���� ���� struct �� �����Ϳ� �Լ��� �ϳ��� class�� ���� ��

	struct A temp �� �����ϵ���
	class A temp �� ����� ��ü			<-- C++������ class����� �� 
	*/

	// ������ ��ü ����
	Node myobj(1);
	myobj.showN();

	// ������ ��ü ���� (new = malloc)
	Node* p_myobj = new Node(1);
	p_myobj->showN();
	delete p_myobj;

	return 0;
}