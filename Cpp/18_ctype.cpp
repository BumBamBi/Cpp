#include<iostream>

using namespace std;

int main() {

	char ch;

	while (true){
		cin.get(ch);	// ó�� ���� ����
		//cin.get();		// ����Ű �ƹ����� ����X

		if (isalnum(ch))
			cout << "is_alnum" << endl;		// ���ĺ� or ����
		if (isalpha(ch))
			cout << "is_alpha" << endl;		// ���ĺ�
		if (isblank(ch))
			cout << "is_blank" << endl;		// ����
		if (isspace(ch))
			cout << "is_space" << endl;		// �����̽� ��
		if (isdigit(ch))
			cout << "is_digit" << endl;		// 0~10
		if (ispunct(ch))
			cout << "is_punct" << endl;		// , or .
		if (isupper(ch))
			cout << "is_upper" << endl;		// �빮��
		if (islower(ch))
			cout << "is_lower" << endl;		// �ҹ���
		if ((ch) == 'q')
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

	cout << char(toupper('a')) << endl;

	return 0;
}