/*
	Virtual func

	�θ�� �ڽĿ��� ���� ����

	�����ε� ���ϰ� �ϳ��� �Լ��� ���� �� �ִ�
	Ÿ���� �θ��� �������ϸ�, �ڽĵ� ��� ���� ����


		- virtual func by reference
			reference�������� �����ϰ� �۵���
		
		- virtual destructor
			�θ�/�ڽ��� �Ҹ��� ȣ����� ���� �ذ� ����

		- pure virtual func
			virtual type func() = 0;�� ����
			�θ� pure virtual func�� �ִٸ�, �ڽ��� ������ �ش� �޼ҵ带 ������ �־�� ��
*/

#include<iostream>

using namespace std;

class A {
public:
	A() {
		cout << "A" << endl;
	}
	virtual ~A() {
		cout << "~A" << endl;
	}
	// �ֻ��� �θ� �Լ��� virtual
	virtual void iam() {
		cout << "I am A" << endl;
	}
	
	// pure virtual func
	// virtual type func() = 0;�� ����
};

class AA : public A {
public:
	AA() {
		cout << "AA" << endl;
	}
	~AA() {
		cout << "~AA" << endl;
	}
	void iam() {
		cout << "I am AA" << endl;
	}
};

class AB : public A {
public:
	AB() {
		cout << "AB" << endl;
	}
	~AB() {
		cout << "~AB" << endl;
	}
	void iam() {
		cout << "I am AB" << endl;
	}
};


void doSomething(A* _p) {
	_p->iam();	// i am A
}


/* ���� �����ε�

void doSomething(AA* _p) {
	_p->iam();	// i am AA
}
void doSomething(AB* _p) {
	_p->iam();	// i am AB
}
*/

int main() {
	
	A* pA = new AA();
	// A�� ��ӹ��� AA��ü�� A���� ����Ű�� ������ pA

	pA->iam();
	// AA�� A�κ��� A�� �޼ҵ� ���
	// �θ� virtual�̸�, AA�� �޼ҵ� ���

	pA = new AB;
	// pA�� A�� ��������.
	// ���� A�� ��ӹ��� AB��ü�� A�� ����Ű�� ������ pA

	pA->iam();
	// AB�� A�κ��� A�� �޼ҵ� ���
	// �θ� virtual�̸�, AB�� �޼ҵ� ���


	cout << "-----------" << endl;
	doSomething(new A);
	doSomething(new AA);
	doSomething(new AB);
	// ���� �����ε����� ���� ������������,
	// ���� virtual�̱� ������ �׳� ��� ����



	// reference�ε� �����ϰ� �����
	cout << "-----------" << endl;
	AA aa;
	AB ab;

	A& ra = aa;
	A& rb = ab;

	ra.iam();	// i am AA
	rb.iam();	// i am AB


	// �Ҹ��� �κп��� ������ ���� �� ����
	cout << "-----------" << endl;

	A* p = new AA;
	delete p;
	// ���ϴ� �� A���� AA���� AA�Ҹ� A�Ҹ�
	// �׷��� ��������Ǵ� ��, A���� AA���� A�Ҹ�

	// ����, A�� �Ҹ��ڸ� virtual�� �ϸ�, AA�� �Ҹ��ڰ� ���� ����Ǹ鼭 ���ϴ´�� �����
	// ���� : AA�� �Ҹ�Ǹ�, AA�� �����ϸ鼭 ���� �θ��� �Ҹ��ڵ� �ڵ����� ȣ��

	cout << "-----------main �����鼭 �Ҹ��� ȣ��-----------" << endl;
	return 0;
}