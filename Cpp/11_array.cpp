#include<iostream>

using namespace std;

int main() {

	const int arrSize = 20;
	char buff[arrSize];

	cout << "Enter answer : ";
	cin.getline(buff, arrSize);		// \n 이 나오기 전까지 모든 문자를 읽어오고, 마지막에 알아서 NULL을 넣음
	// getline(cin, buff) 은 buff가 string이 아니라서 안됨

	cout << "Answer is : " << buff;

	return 0;
}