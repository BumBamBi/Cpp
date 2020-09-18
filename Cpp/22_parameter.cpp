#include<iostream>

using namespace std;


// 배열 시작주소와, 길이를 읽어들임
// 인자값에 int _arr[] 은 int* _arr 과 같은 의미
int sum_arr_1(int _arr[], int _size) {
	int sum = 0;

	for (int i = 0; i < _size; i++) {
		sum += i;
	}
	return sum;
}

// const로 읽으면 실수로 배열값을 수정하려해도 되지 않음
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