#include<iostream>
#include<string>
#include<iterator>
#include<deque>
#include<forward_list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

class p {
public:
	string name;
	int age;
	p(string _s, int _i) {
		name = _s;
		age = _i;
	}
	bool operator<(const p& p1) const {
		if (name < p1.name) {
			return true;
		}
		if (name == p1.name) {
			if (age < p1.age) {
				return true;
			}
		}
		return false;
	}

	bool operator==(const p& p1) const {
		if (name < p1.name) {
			return true;
		}
		if (name == p1.name) {
			if (age < p1.age) {
				return true;
			}
		}
		return false;
	}
};

class pp {
public:
	string name;
	int age;
	pp(string _s, int _i) {
		name = _s;
		age = _i;
	}

};

class compareP {
public:
	bool operator()(p& p1, p& p2) {
		if (p1.name > p2.name) {
			return true;
		}
		if (p1.name == p2.name) {
			if (p1.age < p2.age) {
				return true;
			}
		}
		return false;
	}
};

int main() {
	// pointer


	// STL
	// deque
	{
		cout << "------ deque -----------------------------------------------------------" << endl;
		deque<int> mydeque;

		mydeque.push_back(1);
		mydeque.push_back(2);
		mydeque.push_back(3);
		mydeque.push_front(0);

		auto loc = mydeque.cbegin();
		advance(loc, 3);
		mydeque.insert(loc, 99);

		for (auto& e : mydeque) {
			cout << mydeque.front() << " ";
			mydeque.pop_front();
		}
		cout << endl;
	}
	// fwd_list
	{
		cout << "------ fwd_list -----------------------------------------------------------" << endl;
		forward_list<int> myfwdlist;

		myfwdlist.push_front(3);
		myfwdlist.push_front(2);
		myfwdlist.push_front(1);
		myfwdlist.push_front(0);
	
		auto loc = myfwdlist.cbegin();
		advance(loc, 3);
		myfwdlist.insert_after(loc, 99);

		for (auto i = myfwdlist.begin(); i != myfwdlist.end(); i++) {
			cout << *i << " ";
		}
		cout << endl;
	}

	// adaptor
	{
		{
			cout << "------ stack -----------------------------------------------------------" << endl;
			stack<p> mystack;

			mystack.push(p("a", 1));
			mystack.push(p("b", 2));
			mystack.push(p("c", 3));
			mystack.push(p("d", 4));
					

		}
		{
			cout << "------ queueu -----------------------------------------------------------" << endl;
			queue<int> myqueue;
			queue<p> myqueue2;

			myqueue.push(1);
			myqueue.push(1);
			myqueue.push(1);

			myqueue2.push(p("a", 1));
			myqueue2.push(p("c", 2));
			myqueue2.push(p("d", 3));
		
		}
		{
			cout << "------ pri_queue -----------------------------------------------------------" << endl;
			priority_queue<int> pqueue;
			priority_queue<p,vector<p>, compareP> pqueue2;

			pqueue.push(1);
			pqueue.push(2);

			pqueue2.push(p("b", 2));
			pqueue2.push(p("b", 1));
			pqueue2.push(p("b", 3));
			pqueue2.push(p("a", 0));
			pqueue2.push(p("c", 0));
			pqueue2.push(p("c", 9));

			for (int i = 0; i < 6; i++) {
				cout << pqueue2.top().name << " " << pqueue2.top().age << endl;
				pqueue2.pop();
			}
		
		}
	}
	// set
	{
		cout << "------ set -----------------------------------------------------------" << endl;

		set<int> mset;
		mset.insert(1);
		mset.insert(1);
		mset.insert(2);

		for (auto& e : mset) {
			cout << e << " ";
		}
		cout << endl;

		set<p> mset2;
		mset2.insert(p("aa", 1));
		mset2.insert(p("a", 2));
		mset2.insert(p("b", 3));
		
		for (auto& e : mset2) {
			cout << e.name << e.age << " ";
		}
		cout << endl;
	}
	// map
	{
		cout << "------ map -----------------------------------------------------------" << endl;

		map<int, int> mmap;

		mmap.insert(make_pair(1, 10));

		map<p, int> mmap2;

		mmap2.insert(make_pair(p("b", 1), 10));
		mmap2.insert(make_pair(p("bb", 1), 10));
		mmap2.insert(make_pair(p("a", 1), 10));
		mmap2.insert(make_pair(p("d", 1), 10));

		auto pos = mmap2.find(p("a", 1));

		cout << (*pos).first.name << (*pos).first.age << (*pos).second << endl;

		for (auto& e : mmap2) {
			cout << e.first.name << e.first.age << " ";
		}

		cout << endl;

	}
	// algorithm
	{
		cout << "------ algorithm -----------------------------------------------------------" << endl;

		vector<p> algo;

		algo.push_back(p("a", 1));
		algo.push_back(p("b", 2));
		algo.push_back(p("c", 3));

		sort(algo.begin(), algo.end(), 
			[](p& p1, p& p2) {
				if (p1.name < p2.name) {
					return true;
				}
				if (p1.name == p2.name) {
					if (p1.age < p2.age) {
						return true;
					}
				}
				return false;
				});

		for (auto& e : algo) {
			cout << e.name << e.age << " ";
		}
		cout << endl;

		auto pos = find(algo.begin(), algo.end(), p("b", 2));

		if (pos == algo.end()) {
			cout << "fail" << endl;
		}
		else {
			cout << "found" << endl;
			cout << (*pos).name << (*pos).age << " ";
		}


	}

	return 0;
}