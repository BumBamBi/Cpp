#include<iostream>

using namespace std;

int main_18() {

	char ch;

	while (true){
		cin.get(ch);	// ó�� ���� ����
		cin.get();		// ����Ű �ƹ����� ����X

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
	isalnum - ���ĺ�/����
	inslpha - ���ĺ�
	isblank - ����(space/tab)
	isspace - ����
	isdigit - 0~10
	isxdigit- 0~F
	isupper - �빮��
	islower - �ҹ���
	ispunct	- , . 

	toupper
	tolower
	*/

	return 0;
}