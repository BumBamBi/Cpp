#include<iostream>

using namespace std;

class PrintData {
// class �����ϴ� �ڵ忡���� ��� ����
// privae ��� �Ƚᵵ �ڵ� private
private:
	int a;
	double b;
public:
	PrintData(int _a, double _b);
	void myprint();
};

// ������ 
PrintData::PrintData(int _a=10, double _b=3.14) : a(_a), b(_b) {
	
}
void PrintData::myprint() {
	cout << "int : " << a << endl;
	cout << "double : " << b << endl;
}

int main() {
	PrintData* ppd = new PrintData();
	//ppd->a = 10;		// <- Error : a�� b�� private ������, class �ܺο����� ���� ȣ��(�� ����) �Ұ�
	ppd->myprint();		// myprint()�� private���, �Լ� ȣ�� ����		(�����ڿ����� ȣ�� ���� - Ŭ���� �� ����)
	delete ppd;
}