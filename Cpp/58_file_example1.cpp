/*
	file�� format�� ���缭 ����ϱ�

*/

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Person {
public:
	int idx;
	float height;
	float weight;

	Person(int _i, float _h, float _w) {
		idx = _i;
		height = _h;
		weight = _w;
	}
	void printData() {
		cout << idx << "����, Ű�� " << height << "cm�̰�, �����Դ� " << weight << "kg�Դϴ�." << endl;
	}
};

vector<Person> db;

int main() {

	ifstream input_file("data.txt");

	if (!input_file) {
		cout << "unable" << endl;
		exit(1);
	}

	int idx;
	float height;
	float weight;

	while (input_file.eof() == false) {
		input_file >> idx >> height >> weight;
		db.push_back(Person(idx, height, weight));
	}

	double mean_h = 0.0;
	double mean_w = 0.0;

	for (auto& e : db) {
		mean_h += e.height;
		mean_w += e.weight;
		e.printData();
	}

	cout << "��� Ű : " << mean_h / db.size() << endl;
	cout << "��� ü�� : " << mean_w / db.size() << endl;


	return 0;
}