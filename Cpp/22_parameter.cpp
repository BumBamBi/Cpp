#include<iostream>

using namespace std;


// �迭 �����ּҿ�, ���̸� �о����
// ���ڰ��� int _arr[] �� int* _arr �� ���� �ǹ�
int sum_arr_1(int _arr[], int _size) {
	int sum = 0;

	for (int i = 0; i < _size; i++) {
		sum += i;
	}
	return sum;
}

// const�� ������ �Ǽ��� �迭���� �����Ϸ��ص� ���� ����
int sum_arr_2(const int* _arr, int _size) {
	int sum = 0;

	for (int i = 0; i < _size; i++) {
		sum += i;
	}

	//_arr[4] = 60;

	return sum;
}

int main_22() {
	int arr[5] = { 1,2,3,4,5 };

	int sum = sum_arr_1(arr, 5);

	return 0;
}