// 프로토타입
// PrintData.h 에 있음
/*
#include<iostream>
#include<string>

using namespace std;

// 함수 선언(declaration) = prototye
class PrintData {
public:
	void myprint(int i);
};
*/

// 실제구현되는부분
// 34_PrintData.cpp 파일에 있음
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