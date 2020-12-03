#include<iostream>

using namespace std;

int main() {

	char ch;

	while (true){
		cin.get(ch);	// 처음 문자 저장
		//cin.get();		// 엔터키 아무데도 저장X

		if (isalnum(ch))
			cout << "is_alnum" << endl;		// 알파벳 or 숫자
		if (isalpha(ch))
			cout << "is_alpha" << endl;		// 알파벳
		if (isblank(ch))
			cout << "is_blank" << endl;		// 공백
		if (isspace(ch))
			cout << "is_space" << endl;		// 스페이스 바
		if (isdigit(ch))
			cout << "is_digit" << endl;		// 0~10
		if (ispunct(ch))
			cout << "is_punct" << endl;		// , or .
		if (isupper(ch))
			cout << "is_upper" << endl;		// 대문자
		if (islower(ch))
			cout << "is_lower" << endl;		// 소문자
		if ((ch) == 'q')
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

	cout << char(toupper('a')) << endl;

	return 0;
}