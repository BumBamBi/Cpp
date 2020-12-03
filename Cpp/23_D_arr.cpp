#include<iostream>

using namespace std;

// ������ �迭�� �Ķ���ͷ� ��������
// ù ������ []�� ����� �ڿ��� �״�� �ϸ��

int sum_2d_arr(int _arr_2d[][3], int _row_cnt) {
	int sum = 0;

	for (int i = 0; i < _row_cnt; i++) {
		for (int c = 0; c < 3; c++) {
			sum += _arr_2d[i][c];
		}
	}
	return sum;
}

int sum_3d_arr(int _arr_3d[][2][3], int _row_cnt) {
	int sum = 0;

	for (int i = 0; i < _row_cnt; i++) {
		for (int c = 0; c < 2; c++) {
			for (int k = 0; k < 3; k++) {
				sum += _arr_3d[i][c][k];
			}
		}
	}
	return sum;
}

// �����͸� �̿��ϴ� ��
// int _arr[][3]
// int (*_arr)[3]
// ���� �ٲ㼭 ������ ��
int sum_2d_arr_p(int (*_arr)[3], int _row_cnt) {
	int sum = 0;

	// _arr�� �迭�� ������ ��
	// �޸� �ʰ��ؼ� �����⵵ ��
	for (int i = 1; i < _row_cnt+1; i++) {
		for (int c = 0; c < 3; c++) {
			sum += *(*(_arr + i) + c);
		}
	}
	return sum;
}

int main() {
	
	int arr_2d[2][3] = {
		{1, 1, 1},
		{2, 2, 2}
	};

	int arr_3d[2][2][3] = {
		{{1, 1, 1}, {1, 1, 1}},
		{{2, 2, 2}, {2, 2, 2}}
	};
	

	cout << "2d Sum is " << sum_2d_arr(arr_2d, 2) << endl;
	cout << "3d Sum is " << sum_3d_arr(arr_3d, 2) << endl;
	cout << "2d_p Sum is " << sum_2d_arr_p(arr_2d, 2) << endl;

	return 0;
}