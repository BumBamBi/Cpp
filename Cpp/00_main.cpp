#include <iostream>

// define ���� �ٲ��ָ� �ش� ���α׷� ����

#define _main main_32

int main() {

	extern int _main();
	_main();

	return 0;
}