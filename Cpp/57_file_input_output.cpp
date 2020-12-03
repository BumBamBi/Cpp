/*
	File I/O

	std::ios::app	= append	���������� ������, �̾ ����
	std::ios::trunc	= overwrite	���������� ������, ��� ����

	ifstream
	std::ios::in
	
*/

#include<iostream>
#include<fstream>

using namespace std;


int main() {

	// ���� ---------------------------------------------------------
	// 1�� fstream
	fstream wf1("test_1.txt", ios::out);	// out���� test_1.txt����

	if (!wf1) {
		cout << "unable" << endl;
		exit(1);
	}

	for (int i = 0; i < 10; i++) {
		wf1 << i << endl;
	}

	// 2�� ofstream
	ofstream wf2("test_1.txt", ios::app);
	//ofstream f2("test_1.txt", ios::trunc);

	if (!wf2) {
		cout << "unable" << endl;
		exit(1);
	}

	for (int i = 0; i < 20; i++) {
		wf2 << i << endl;
	}

	// �б� ---------------------------------------------------------

	ifstream rf1("test_1.txt");

	if (!rf1) {
		cout << "unable" << endl;
		exit(1);
	}

	int num;

	while (rf1.eof() == false) {
		rf1 >> num;
		cout << num << endl;
		// ������ �ٿ� \n �� ����� ����� ��µ�.
	}

	return 0;
}