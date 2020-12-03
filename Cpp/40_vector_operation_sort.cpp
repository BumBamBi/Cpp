/*
vector������ ���� �� �� ����
algorithm ����� �̿��ϸ�, sort ����
2���� ���� ����		- N*M ó�� ������ ũ�Ⱑ �ƴϾ ���� �� �ִ�.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int& _a, int& _b) {
	return _a < _b;
}

int main() {
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2;

	// ����	---------------------------------------------------------------------------------
	v2 = v1;

	cout << "--v1--" << endl;
	for (auto& i : v1) {
		cout << i << " ";
	}

	cout << endl << "--v2--" << endl;
	for (auto& i : v2) {
		cout << i << " ";
	}

	// ��	---------------------------------------------------------------------------------
	if (v1 == v2) {
		cout << endl << "same" << endl;
	}
	else {
		cout << "difrent" << endl;
		//��� �ϳ� or ���̰� �޶����� �ٸ���.
	}

	// sort	---------------------------------------------------------------------------------
	vector<int> v3 = { 10,7,15,2,9 };
	sort(v3.begin(), v3.end(), compare);

	cout << "--sorted--" << endl;
	for (auto& i : v3) {
		cout << i << " " << endl;
	}

	// 2��������	---------------------------------------------------------------------------------
	vector<vector<int>> v4;

	v4.push_back({ 1,2,3 });
	v4.push_back({ 45,32 });
	v4.push_back({ 10,9,8,7 });

	return 0;
}