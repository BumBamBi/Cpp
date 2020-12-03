#include <iostream>

int add_2_num(int _a, int _b);

int main() {

	using namespace std;
		
	cout << "합할 첫 번째 숫자를 입력하세요 : ";

	int a, b;

	cin >> a;

	cout << "합할 두 번쨰 숫자를 입력하세요 : ";

	cin >> b;

	int result = add_2_num(a, b);

	cout << a << " + " << b << "=" << result << endl;

	return 0;
}

int add_2_num(int _a, int _b) {
	return (_a + _b);
}