#include<iostream>

using namespace std;

//<기존 c언어 struct 방식>
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
	위와 같이 struct 내 데이터와 함수를 하나의 class에 넣은 것

	struct A temp 로 선언하듯이
	class A temp 로 만든게 객체			<-- C++에서는 class안적어도 됨 
	*/

	// 정적인 객체 생성
	Node myobj(1);
	myobj.showN();

	// 동적인 객체 생성 (new = malloc)
	Node* p_myobj = new Node(1);
	p_myobj->showN();
	delete p_myobj;

	return 0;
}