#define _CRT_SECURE_NO_WARNINGS		//strcpy �� �������� �ʾƼ� �̸� ��������

#include<iostream>
#include<cstring>

using namespace std;

char* getname() {

	// ���� �Ҵ�
	char temp[101];

	cout << "enter name : ";

	cin >> temp;

	// ���� �Ҵ�
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