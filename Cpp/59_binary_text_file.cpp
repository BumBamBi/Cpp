/*
	binary file	- 진짜 값
	text file	- 아스키코드 값
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	// text
	ofstream of_t("text_data.txt");
	int i = 15;
	of_t << i;

	// binary
	ofstream of_b("binary_data.bin", ios::binary);
	of_b.write((char*)&i, sizeof(int));				// binary저장은 이방식을 사용해야함! 안그러면 text로 저장
	of_b.close();
	// 0x0F 로 저장됨
	// little endian 방식이라, 	0F 00 00 00 으로 저장되어있음

	ifstream if_b("binary_data.bin", ios::binary);
	int k;
	if_b.read((char*)&k, sizeof(int));

	cout << "read : " << k << endl;

	return 0;
}