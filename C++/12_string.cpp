#include<iostream>
#include<string>

using namespace std;

int main_12() {
	
	string ans;

	cout << "Enter answer :";
	getline(cin, ans);	// cin.getline(arr, arrSize)ó�� ���� ���� �����ְ� ���� ��� ����(string)�� ����

	cout << "answer is : " << ans << endl;

	cout << "length is : " << ans.length() << endl;

	cout << "first is : " << ans[0] << endl;

	cout << "last is : " << ans[ans.length() - 1] << endl;

	return 0;
}