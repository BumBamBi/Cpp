/*
	container adaptor
	- container�� ������ ���� ����� �� �ֵ���, ������ �����ִ� ��

	* stack
		- push, pop, top, empty, size
	* queue
		- push, pop, front, back, empty, size
	* priority_queue
		- push, pop, top, empty, size
*/
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<deque>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string _name, int _age) {
		name = _name;
		age = _age;
	}

	void printPersonInfo() const{
		cout << name << " is "<< age << " years old" << endl;
	}
};

class ComparePerson {
public:
	bool operator()(Person& p1, Person& p2) {
		// �ι�° ���ڰ� ���ΰ��ε�

		// ���̰� ������ �켱������ ����
		return (p1.age < p2.age);

		// ������ �ܾ �ڿ� ���ü��� �켱������ ����
		// return p1.name.compare(p2.name) > 0;
	}
};

int main() {
	// 1) stack

	stack<int> mystack;	// default container(deque)
	//stack<int, vector<int>> mystack;	// container ����

	mystack.push(5);
	mystack.push(4);
	mystack.push(3);

	cout << "top   : " << mystack.top() << endl;	// popó�� �����°��� �ƴ�
	cout << "size  : " << mystack.size() << endl;
	cout << "empty : " << mystack.empty() << endl;

	while (mystack.empty() != true) {
		cout << mystack.top() << " ";
		mystack.pop();
	}
	cout << endl;

	cout << "======================" << endl;

	// 2) queue
	queue<Person> myqueue;
	//queue<Person> myqueue;	// container ����

	myqueue.push(Person("james", 20));
	myqueue.push(Person("Tomas", 19));
	myqueue.push(Person("Carry", 21));
	
	cout << "front : " << myqueue.front().name << endl;	// popó�� �����°��� �ƴ�
	cout << "back  : " << myqueue.back().name << endl;	// popó�� �����°��� �ƴ�
	cout << "size  : " << myqueue.size() << endl;
	cout << "empty : " << myqueue.empty() << endl;

	while (myqueue.empty() != true) {
		myqueue.front().printPersonInfo();
		myqueue.pop();
	}
	cout << endl;

	cout << "======================" << endl;

	// 3) priority_queue
	priority_queue<Person, vector<Person>, ComparePerson> mypqueue;
	//priority_queue<Person, deque<Person>, ComparePerson> mypqueue;

	mypqueue.push(Person("James", 22));
	mypqueue.push(Person("Tomas", 19));
	mypqueue.push(Person("Carry", 21));
	
	cout << "top   : " << mypqueue.top().name << endl;	// popó�� �����°��� �ƴ�
	cout << "size  : " << mypqueue.size() << endl;
	cout << "empty : " << mypqueue.empty() << endl;

	while (mypqueue.empty() != true) {
		mypqueue.top().printPersonInfo();
		mypqueue.pop();
	}
	cout << endl;

	return 0;
}