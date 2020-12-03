/*
	exception handling

	try - catch
*/

#include<iostream>
#include<vector>
#include<exception>

using namespace std;

int main() {

	vector<int> v = { 1, 2, 3, 4, 5 };

	int _idx = 5;

	// index 초과
	try {
		cout << v.at(5) << endl;	// v[] 로는 무슨 에러인지 못잡음
	}
	// catch는 switch문처럼 위에부터 확인하고, 일치하면 break
	catch(out_of_range& e){
		cout << e.what() << endl;
		cout << "out of range" << endl;
	}
	catch (length_error& e) {
		cout << e.what() << endl;
		cout << "length error" << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
		cout << "Exception" << endl;
	}


	return 0;
}