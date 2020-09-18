#include<iostream>
#include<fstream>	// file stream

using namespace std;

int main_20() {

	// 읽기
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

	cout << name << "은 나이가 " << age << "살 이고, " << weight << "kg 입니다." << endl;

	return 0;

	/*
	1. txt file에 쓰기/읽기

	2. 헤더 fstream

	3. 파일 쓰기
	- ofstream outFile;
	- outFile.open("test.txt");	-> 쓸 파일 열기/만들기
	- outFile.close()

	4. 파일 읽기
	inFile.is_open() : bool;
	inFile.good() : bool		-> 아직 읽을 데이터가 남았는가?
	inFile.eof() : bool			-> end of file = 파일의 끝에 도달했나?
	inFile.fail() : bool
	*/
}