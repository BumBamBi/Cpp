#include<iostream>

using namespace std;

inline double cal_sum(double a, double b) {
	return(a + b);
}

int main_26() {

	cout << cal_sum(1.0, 2.0) << endl;

	// inline -> �Լ� ȣ���Ϸ� �Ȱ��� �ڵ忡 �� �̾� ���̴� ��

	// inline�� ���� ���δ� �����Ϸ��� �ϴ°�(inline �ߴٰ� �� �Ǵ°� �ƴ�)

	return 0;
}