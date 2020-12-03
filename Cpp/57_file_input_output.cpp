/*
	File I/O

	std::ios::app	= append	기존파일이 있으면, 이어서 쓰기
	std::ios::trunc	= overwrite	기존파일이 있으면, 엎어서 쓰기

	ifstream
	std::ios::in
	
*/

#include<iostream>
#include<fstream>

using namespace std;


int main() {

	// 쓰기 ---------------------------------------------------------
	// 1번 fstream
	fstream wf1("test_1.txt", ios::out);	// out모드로 test_1.txt생성

	if (!wf1) {
		cout << "unable" << endl;
		exit(1);
	}

	for (int i = 0; i < 10; i++) {
		wf1 << i << endl;
	}

	// 2번 ofstream
	ofstream wf2("test_1.txt", ios::app);
	//ofstream f2("test_1.txt", ios::trunc);

	if (!wf2) {
		cout << "unable" << endl;
		exit(1);
	}

	for (int i = 0; i < 20; i++) {
		wf2 << i << endl;
	}

	// 읽기 ---------------------------------------------------------

	ifstream rf1("test_1.txt");

	if (!rf1) {
		cout << "unable" << endl;
		exit(1);
	}

	int num;

	while (rf1.eof() == false) {
		rf1 >> num;
		cout << num << endl;
		// 마지막 줄에 \n 이 없어야 제대로 출력됨.
	}

	return 0;
}