/*
vector끼리의 복사 및 비교 가능
algorithm 헤더를 이용하면, sort 지원
2차원 벡터 가능		- N*M 처럼 고정된 크기가 아니어도 만들 수 있다.
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

	// 복사	---------------------------------------------------------------------------------
	v2 = v1;

	cout << "--v1--" << endl;
	for (auto& i : v1) {
		cout << i << " ";
	}

	cout << endl << "--v2--" << endl;
	for (auto& i : v2) {
		cout << i << " ";
	}

	// 비교	---------------------------------------------------------------------------------
	if (v1 == v2) {
		cout << endl << "same" << endl;
	}
	else {
		cout << "difrent" << endl;
		//요소 하나 or 길이가 달라지면 다르다.
	}

	// sort	---------------------------------------------------------------------------------
	vector<int> v3 = { 10,7,15,2,9 };
	sort(v3.begin(), v3.end(), compare);

	cout << "--sorted--" << endl;
	for (auto& i : v3) {
		cout << i << " " << endl;
	}

	// 2차원벡터	---------------------------------------------------------------------------------
	vector<vector<int>> v4;

	v4.push_back({ 1,2,3 });
	v4.push_back({ 45,32 });
	v4.push_back({ 10,9,8,7 });

	return 0;
}