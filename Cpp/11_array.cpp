#include<iostream>

using namespace std;

int main() {

	const int arrSize = 20;
	char buff[arrSize];

	cout << "Enter answer : ";
	cin.getline(buff, arrSize);		// \n �� ������ ������ ��� ���ڸ� �о����, �������� �˾Ƽ� NULL�� ����
	// getline(cin, buff) �� buff�� string�� �ƴ϶� �ȵ�

	cout << "Answer is : " << buff;

	return 0;
}