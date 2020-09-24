#include <iostream>

// define 값을 바꿔주면 해당 프로그램 실행

#define _main main_28

int main() {

	extern int _main();
	_main();

	return 0;
}