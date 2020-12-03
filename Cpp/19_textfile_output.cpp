#include<iostream>
#include<fstream>	// file stream

using namespace std;

int main() {

	//����
	ofstream outFile;

	outFile.open("test.txt");

	cout << "name : ";
	char name[50];
	cin.getline(name, 50);		// �̸��� ������ ���� �� �����Ƿ�
	outFile << name << endl;

	cout << "age : ";
	unsigned short age;
	cin >> age;
	outFile << age << endl;

	cout << "weight : ";
	double weight;
	cin >> weight;
	outFile << weight << endl;

	outFile.close();

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