#include<iostream>
#include<fstream>	// file stream

using namespace std;

int main_20() {

	// �б�
	ifstream inFile;

	inFile.open("test.txt");

	if (inFile.is_open() == false) {
		cout << "error" << endl;
		return -1;
	}

	char name[50];
	unsigned short age;
	double weight;

	inFile.getline(name, 50);
	inFile >> age;
	inFile >> weight;

	cout << name << "�� ���̰� " << age << "�� �̰�, " << weight << "kg �Դϴ�." << endl;

	return 0;

	/*
	1. txt file�� ����/�б�

	2. ��� fstream

	3. ���� ����
	- ofstream outFile;
	- outFile.open("test.txt");	-> �� ���� ����/�����
	- outFile.close()

	4. ���� �б�
	inFile.is_open() : bool;
	inFile.good() : bool		-> ���� ���� �����Ͱ� ���Ҵ°�?
	inFile.eof() : bool			-> end of file = ������ ���� �����߳�?
	inFile.fail() : bool
	*/
}