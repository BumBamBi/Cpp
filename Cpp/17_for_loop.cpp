#include<iostream>
#include<cstring>

using namespace std;

int main_17() {

	int a[5] = { 1, 2, 3, 4, 5 };

	for (int k : a) {
		cout << k << endl;
	}

	for (char k : a) {
		// int ���� ĳ���õż� char(Ȥ�� �ٸ� �ƹ��ų�) �� �ٲ� ��
		cout << k << endl;
	}

	for (auto k : a) {
		// �迭 ���� �´� ������ Ÿ������ �˾Ƽ� ��ȯ
		cout << k << endl;
	}

	// ���� �迭�� range for loop�� �ȵ�
	


	return 0;
}