#include<iostream>

using namespace std;

int main(){

	// ���� �迭 - �Ϲ� �迭(�����Ǹ� ������� ����)
	int pa[10];
	pa[5] = 10;

	cout << "pa[5] : " << pa[5] << endl;


	// ���� �迭 - �����͸� �̿��Ͽ�, �Ҵ�� ���� ����
	int* pb = new int[10];	// int[10]�� ������ ������ ����Ű��, �����ͺ��� pb�� ����
	pb[5] = 10;

	cout << "pb[5] : " << pb[5] << endl;

	delete[] pb;	// �迭�̶� [] ǥ�� �� ���ֱ�

	return 0;
}