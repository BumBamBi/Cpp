/*
	std::ios::beg	- begin		(파일 시작점)
	std::ios::end	- end		(파일 끝점)
	std::ios::cur	- current	(현재 읽는 위치)

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	int data[5] = { 1,2,3,4,5 };

	// write
	ofstream output("binary_data.bin", ios::binary);

	if (output.fail() == true) {
		exit(1);
	}

	output.write((char*)data, sizeof(int) * 5);
	output.close();

	// read
	ifstream input("binary_data.bin", ios::binary);

	if (input.fail() == true) {
		exit(1);
	}

	int k;

	input.seekg(sizeof(int) * 2, ios::beg);				// seekg(몇 byte만큼, 어디를 기준으로)
	// input.seekg((int)sizeof(int) * (-3), ios::end);	// seekg(몇 byte만큼, 어디를 기준으로)
	// input.seekg(sizeof(int) * 2, ios::cur);			// seekg(몇 byte만큼, 어디를 기준으로)

	input.read((char*)&k, sizeof(int));

	cout << "val : " << k << endl;

	input.seekg((int)sizeof(int) * (-3), ios::end);	// 
	input.read((char*)&k, sizeof(int));

	cout << "val : " << k << endl;

	return 0;
}