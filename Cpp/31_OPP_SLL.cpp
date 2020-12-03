#include<iostream>

using namespace std;

// class 선언
// 생성자(constructor)	: 객체가 만들어질 때 '자동으로' 수행되는 함수(반환값이 없음)
//						  이 함수는 클래스 이름과 동일한 이름을 가짐
//						  객체가 만들어질 때, 초기화 등을 수행
class Node {
public:
	int n;
	Node* next;

	// 생성자
	Node(int v) : n(v), next(NULL) {
		// 이런식으로 위에다가 바로 초기화 해도 됨
	}

	void add2SLL(Node*& _head) {
		// 처음일 때(head 가 NULL일 때)
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
		// 처음일 떄(head 가 NULL일 때)
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

	// mySLL에 있는 함수를 이용하여 (알아서) 연결		<-- head가 이 안에 있어서 알아서 할 수 있음
	my_sll.addNode(a);
	my_sll.addNode(b);

	// mySLL이 아닌, Node에 있는 add2SLL 함수를 이용해서 연결
	Node* c = new Node(30);
	Node*& _head = my_sll.head;
	c->add2SLL(_head);

	my_sll.showAll();



	//////////////////////////////////////////
	/* 정적

	Node a(10);
	Node b(20);
	
	//Node*& r_head = head;

	a.add2SLL(r_head);
	b.add2SLL(r_head);

	head->showN();
	head->next->showN();
	*/

	//////////////////////////////////////////
	/*동적

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