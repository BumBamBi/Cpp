/*
	template

		- function
		- class
				ex) vector<type>
*/

#include<iostream>

using namespace std;


// function --------------------------------------------
template<typename T>
T get_max(T a, T b) {
	return (a >= b) ? a : b;		// 조건 ? 참 : 거짓
}
template<>
char get_max(char a, char b) {
	return 'z';
}

template<typename T1, typename T2>
T2 do_something(T1 a, T2 b) {
	T1 temp_a = a * b;
	T2 temp_b = a * b;

	cout << "temp_a : " << temp_a << endl;
	cout << "temp_b : " << temp_b << endl;
	
	return temp_b;
}
// -----------------------------------------------------

// class -----------------------------------------------
template<typename T1, typename T2 = int>	// 초기값 설정. 아무값도 없으면 int. (초기값음 마지막 매개변수만 가능)
class Mydata {
public:
	T1 data1;
	T2 data2;

	Mydata(T1 _data1, T2 _data2) {
		data1 = _data1;
		data2 = _data2;
	}
};
// -----------------------------------------------------

int main() {

	// function 
	cout << "bigger one is : " << get_max(4, 5) << endl;
	cout << "bigger one is : " << get_max(4.5, 3.1) << endl;
	cout << "bigger one is : " << get_max('b', 'a') << endl;
	cout << "bigger one is : " << get_max("abd", "abc") << endl;


	double k = do_something(1, 3.54);
	cout << "return : " << k << endl;

	cout << "------------------------------" << endl;
	// class
	Mydata<int/*int*/> a(10, 4);		// int, default(int)
	Mydata<double, int> b(20.3, 10);	// double, int
	Mydata<char, double> c('a', 4.5);	// char, double

	cout << a.data1 << ", " << a.data2 << endl;
	cout << b.data1 << ", " << b.data2 << endl;
	cout << c.data1 << ", " << c.data2 << endl;

	return 0;
}