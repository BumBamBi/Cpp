#include<iostream>
#include<string>

using namespace std;

class PrintData {
public:
	// �����ε�(���� �̸��� �Լ���)
	void myprint(int i) {
		cout << "int : " << i << endl;
	}
	void myprint(double d) {
		cout << "double : " << d << endl;
	}
	void myprint(string s = "s is not given") {
		cout << "string : " << s << endl;
	}
};

int main() {
	// ����
	PrintData pd;
	pd.myprint(3);
	pd.myprint(3.141592);
	pd.myprint("hello");

	// ����
	PrintData* ppd = new PrintData;
	ppd->myprint(4);
	ppd->myprint(1.111);
	ppd->myprint();
	delete ppd;

	return 0;
}
