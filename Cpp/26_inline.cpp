#include<iostream>

using namespace std;

inline double cal_sum(double a, double b) {
	return(a + b);
}

int main_26() {

	cout << cal_sum(1.0, 2.0) << endl;

	// inline -> 함수 호출하러 안가고 코드에 쭉 이어 붙이는 것

	// inline의 수행 여부는 컴파일러가 하는것(inline 했다고 다 되는건 아님)

	return 0;
}