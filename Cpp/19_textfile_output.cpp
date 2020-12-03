#include<iostream>
#include<fstream>	// file stream

using namespace std;

int main() {

	//쓰기
	ofstream outFile;

	outFile.open("test.txt");

	cout << "name : ";
	char name[50];
	cin.getline(name, 50);		// 이름에 공백이 있을 수 있으므로
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