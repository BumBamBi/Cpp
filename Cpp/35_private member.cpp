#include<iostream>

using namespace std;

class PrintData {
// class 구현하는 코드에서만 사용 가능
// privae 라고 안써도 자동 private
private:
	int a;
	double b;
public:
	PrintData(int _a, double _b);
	void myprint();
};

// 생성자 
PrintData::PrintData(int _a=10, double _b=3.14) : a(_a), b(_b) {
	
}
void PrintData::myprint() {
	cout << "int : " << a << endl;
	cout << "double : " << b << endl;
}

int main() {
	PrintData* ppd = new PrintData();
	//ppd->a = 10;		// <- Error : a와 b는 private 변수라서, class 외부에서는 변수 호출(값 변경) 불가
	ppd->myprint();		// myprint()도 private라면, 함수 호출 못함		(생성자에서는 호출 가능 - 클래스 내 존재)
	delete ppd;
}