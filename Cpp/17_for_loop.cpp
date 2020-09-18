#include<iostream>
#include<cstring>

using namespace std;

int main_17() {

	int a[5] = { 1, 2, 3, 4, 5 };

	for (int k : a) {
		cout << k << endl;
	}

	for (char k : a) {
		// int 형이 캐스팅돼서 char(혹은 다른 아무거나) 로 바뀌어서 들어감
		cout << k << endl;
	}

	for (auto k : a) {
		// 배열 안의 맞는 데이터 타입으로 알아서 변환
		cout << k << endl;
	}

	// 동적 배열은 range for loop이 안됨
	


	return 0;
}