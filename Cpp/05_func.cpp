#include <iostream>

int add_2_num(int _a, int _b);

int main() {

	using namespace std;
		
	cout << "���� ù ��° ���ڸ� �Է��ϼ��� : ";

	int a, b;

	cin >> a;

	cout << "���� �� ���� ���ڸ� �Է��ϼ��� : ";

	cin >> b;

	int result = add_2_num(a, b);

	cout << a << " + " << b << "=" << result << endl;

	return 0;
}

int add_2_num(int _a, int _b) {
	return (_a + _b);
}