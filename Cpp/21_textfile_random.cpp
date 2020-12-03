#include<iostream>
#include<fstream>	// file stream

using namespace std;

int main() {

	// �б�
	ifstream inFile;

	inFile.open("add.txt");

	if (inFile.is_open() == false) {
		cout << "error" << endl;
		return -1;
	}

	int val;
	int sum = 0;

	while (true) {
		if (inFile.good() == false) {
			break;
		}

		inFile >> val;
		sum += val;
	}

	if (inFile.eof() == true) {
		cout << "sum is : " << sum << endl;
		inFile.close();
	}
	else {
		cout << "error" << endl;
		inFile.close();
	}

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