/*
	binary file	- ��¥ ��
	text file	- �ƽ�Ű�ڵ� ��
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
	of_b.write((char*)&i, sizeof(int));				// binary������ �̹���� ����ؾ���! �ȱ׷��� text�� ����
	of_b.close();
	// 0x0F �� �����
	// little endian ����̶�, 	0F 00 00 00 ���� ����Ǿ�����

	ifstream if_b("binary_data.bin", ios::binary);
	int k;
	if_b.read((char*)&k, sizeof(int));

	cout << "read : " << k << endl;

	return 0;
}