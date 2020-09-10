#include<iostream>
#include<string>

using namespace std;

int main_12() {
	
	string ans;

	cout << "Enter answer :";
	getline(cin, ans);	// cin.getline(arr, arrSize)처럼 길이 지정 안해주고 쉽게 사용 가능(string)일 때만

	cout << "answer is : " << ans << endl;

	cout << "length is : " << ans.length() << endl;

	cout << "first is : " << ans[0] << endl;

	cout << "last is : " << ans[ans.length() - 1] << endl;

	return 0;
}