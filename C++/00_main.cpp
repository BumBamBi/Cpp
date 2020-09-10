#include <iostream>
#define _main main_16

int main() {

	extern int _main();
	_main();

	return 0;
}