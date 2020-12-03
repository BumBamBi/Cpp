#include<iostream>

using namespace std;

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

	void add2SLL(Node*& _head) {
		// ó���� ��(head �� NULL�� ��)
		if (_head == NULL) {
			_head = this;
		}
		else {
			Node* temp = _head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = this;
		}
	}

	void showN() {
		cout << "n is : " << n << endl;
	}
};

class My_SLL {
public:
	Node* head;
	Node* last;
	int cnt;

	My_SLL() {
		head = NULL;
		last = NULL;
		cnt = 0;
	}

	void addNode(Node* _newone) {
		// ó���� ��(head �� NULL�� ��)
		if (head == NULL) {
			head = _newone;
			last = _newone;
			cnt = 1;
		}
		else {
			last->next = _newone;
			last = _newone;
			cnt += 1;
		}
	}

	void showAll() {
		if (cnt == 0) {
			cout << "No Node" << endl;
			return;
		}
		else {
			Node* temp = head;
			while (temp != NULL) {
				cout << temp->n << endl;
				temp = temp->next;
			}
		}
	}
};

int main() {

	Node* a = new Node(10);
	Node* b = new Node(20);

	My_SLL my_sll;

	// mySLL�� �ִ� �Լ��� �̿��Ͽ� (�˾Ƽ�) ����		<-- head�� �� �ȿ� �־ �˾Ƽ� �� �� ����
	my_sll.addNode(a);
	my_sll.addNode(b);

	// mySLL�� �ƴ�, Node�� �ִ� add2SLL �Լ��� �̿��ؼ� ����
	Node* c = new Node(30);
	Node*& _head = my_sll.head;
	c->add2SLL(_head);

	my_sll.showAll();



	//////////////////////////////////////////
	/* ����

	Node a(10);
	Node b(20);
	
	//Node*& r_head = head;

	a.add2SLL(r_head);
	b.add2SLL(r_head);

	head->showN();
	head->next->showN();
	*/

	//////////////////////////////////////////
	/*����

	Node* pa = new Node(10);
	Node* pb = new Node(20);

	//Node*& r_head = head;

	pa->add2SLL(r_head);
	pb->add2SLL(r_head);

	head->showN();
	head->next->showN();
	*/
	return 0;
}