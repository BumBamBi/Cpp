#include<iostream>
#include<string>

using namespace std;

class PrintData {
public:
	// 오버로딩(같은 이름의 함수들)
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
	// 정적
	PrintData pd;
	pd.myprint(3);
	pd.myprint(3.141592);
	pd.myprint("hello");

	// 동적
	PrintData* ppd = new PrintData;
	ppd->myprint(4);
	ppd->myprint(1.111);
	ppd->myprint();
	delete ppd;

	return 0;
}
