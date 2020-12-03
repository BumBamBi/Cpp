#include<iostream>

using namespace std;

int main(){

	// 정적 배열 - 일반 배열(생성되면 사라지지 않음)
	int pa[10];
	pa[5] = 10;

	cout << "pa[5] : " << pa[5] << endl;


	// 동적 배열 - 포인터를 이용하여, 할당과 삭제 가능
	int* pb = new int[10];	// int[10]을 저장할 공간을 가리키는, 포인터변수 pb를 생성
	pb[5] = 10;

	cout << "pb[5] : " << pb[5] << endl;

	delete[] pb;	// 배열이라 [] 표시 꼭 해주기

	return 0;
}