#include<iostream>

using namespace std;

int main_18() {

	char ch;

	while (true){
		cin.get(ch);	// 처음 문자 저장
		cin.get();		// 엔터키 아무데도 저장X

		if (isalnum(ch))
			cout << "isalnum" << endl;
		if (isalpha(ch))
			cout << "isalpha" << endl;
		if (isblank(ch))
			cout << "isblank" << endl;
		if (isspace(ch))
			cout << "isspace" << endl;
		if (isdigit(ch))
			cout << "isdigit" << endl;
		if (ispunct(ch))
			cout << "ispunct" << endl;
		if (isupper(ch))
			cout << "isupper" << endl;
		if (islower(ch))
			cout << "islower" << endl;
		if (islower(ch) == 'q')
			break;
	}

	/*
	* 
	isalnum - 알파벳/숫자
	inslpha - 알파벳
	isblank - 공백(space/tab)
	isspace - 공백
	isdigit - 0~10
	isxdigit- 0~F
	isupper - 대문자
	islower - 소문자
	ispunct	- , . 

	toupper
	tolower
	*/

	return 0;
}