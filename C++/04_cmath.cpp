#include <iostream>
#include <cmath>

int main_04(){

	using namespace std;

	cout << "제곱근을 구하려는 숫자를 입력하시오 : ";

	double n;

	cin >> n;

	double nsqrt = sqrt((double)n);	//캐스팅

	cout << n << "의 제곱근은 " << nsqrt << " 입니다." << endl;

	return 0;
}