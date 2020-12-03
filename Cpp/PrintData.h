#include<iostream>
#include<string>

using namespace std;

// 함수 선언(declaration) = prototye
class PrintData {
public:
	// 오버로딩하면 안되더라.. 왜지?
	void myprint(int i);
	//void myprint(double d);
	//void myprint(string s = "s is not given");
};