#include <iostream>
#include <climits>

using namespace std;

int main_06(){

	short s_var;
	int i_var;
	long l_var;
	long long ll_var;
	
	// sizeof�� datatype�� �̿�
	cout << "short size is " << sizeof(short) << endl;
	cout << "int size is " << sizeof(int) << endl;
	cout << "long size is " << sizeof(long) << endl;
	cout << "long long size is " << sizeof(long long) << endl;
	cout << endl;

	// sizeof�� �������� �̿�
	cout << "short size is " << sizeof s_var << endl;
	cout << "int size is " << sizeof i_var << endl;
	cout << "long size is " << sizeof l_var << endl;
	cout << "long long size is " << sizeof ll_var << endl;
	cout << endl;

	// ��ũ�θ� �̿��� max��
	cout << "short max size is " << SHRT_MAX << endl;
	cout << "int max size is " << INT_MAX << endl;
	cout << "long max size is " << LONG_MAX << endl;
	cout << "long long max size is " << LLONG_MAX << endl;
	cout << endl;

	// unsigned ������ max��
	cout << "unsigned short max size is " << USHRT_MAX << endl;
	cout << "unsigned int max size is " << UINT_MAX << endl;
	cout << "unsigned long max size is " << ULONG_MAX << endl;
	cout << "unsigned long long max size is " << ULLONG_MAX << endl;
	cout << endl;

	return 0;
}
