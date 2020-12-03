#define _CRT_SECURE_NO_WARNINGS		//strcpy 가 안전하지 않아서 미리 선언해줌

#include<iostream>
#include<cstring>

using namespace std;

char* getname() {

	// 정적 할당
	char temp[101];

	cout << "enter name : ";

	cin >> temp;

	// 동적 할당
	char* pn = new char[strlen(temp)+1];
	
	strcpy(pn, temp);

	return pn;
}

int main() {

	char* name;
	
	name = getname();

	cout << "name : " << name << endl;
	cout << "adress : " << (int *)name << endl;

	return 0;
}