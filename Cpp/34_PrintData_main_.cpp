// ������Ÿ��
// PrintData.h �� ����
/*
#include<iostream>
#include<string>

using namespace std;

// �Լ� ����(declaration) = prototye
class PrintData {
public:
	void myprint(int i);
};
*/

// ���������Ǵºκ�
// 34_PrintData.cpp ���Ͽ� ����
/*
void PrintData::myprint(int i) {
	cout << "int : " << i << endl;
}
*/

#include "PrintData.h"

int main() {
	PrintData* ppd = new PrintData();
	ppd->myprint(3);
	delete ppd;

	return 0;
}