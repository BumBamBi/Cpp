/*
	container adaptor
	- container를 다음과 같이 사용할 수 있도록, 사용법을 씌워주는 것

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
		// 두번째 인자가 주인공인듯

		// 나이가 많은게 우선순위가 높다
		return (p1.age < p2.age);

		// 사전적 단어가 뒤에 나올수록 우선순위가 높다
		// return p1.name.compare(p2.name) > 0;
	}
};

int main() {
	// 1) stack

	stack<int> mystack;	// default container(deque)
	//stack<int, vector<int>> mystack;	// container 지정

	mystack.push(5);
	mystack.push(4);
	mystack.push(3);

	cout << "top   : " << mystack.top() << endl;	// pop처럼 빼내는것이 아님
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
	//queue<Person> myqueue;	// container 지정

	myqueue.push(Person("james", 20));
	myqueue.push(Person("Tomas", 19));
	myqueue.push(Person("Carry", 21));
	
	cout << "front : " << myqueue.front().name << endl;	// pop처럼 빼내는것이 아님
	cout << "back  : " << myqueue.back().name << endl;	// pop처럼 빼내는것이 아님
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
	
	cout << "top   : " << mypqueue.top().name << endl;	// pop처럼 빼내는것이 아님
	cout << "size  : " << mypqueue.size() << endl;
	cout << "empty : " << mypqueue.empty() << endl;

	while (mypqueue.empty() != true) {
		mypqueue.top().printPersonInfo();
		mypqueue.pop();
	}
	cout << endl;

	return 0;
}