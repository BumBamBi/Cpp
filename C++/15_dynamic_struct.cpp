#include<iostream>

using namespace std;

struct things {
	char name[20];
	double weight;
	double price;
};

int main_15() {

	// C
	// struct things* pt = (struct things*)malloc(sizeof(struct things));
	// free(pt);

	// C++
	things* pt = new things;

	cout << "enter name : ";
	cin.get(pt->name, 20);

	cout << "enter weight : ";
	cin >> pt->weight;

	cout << "enter price : ";
	cin >> (*pt).price;

	delete pt;

	return 0;
}