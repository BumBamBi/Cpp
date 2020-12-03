/* 
vector을 이용하여 SLL을 바로 사용가능
vector<data_type> 변수명;

vname.push_back()		뒤에 붙여 넣기
vname.front()			맨 앞
vname.back()			맨 뒤
vname.pop_back()		뒤에있는거를 없애버림
vname.empty()			비어있는지 확인

vname.begin()			각 vector의 iterater(vector들의 시퀀스한 주소들)를 읽어옴
vname.end()				iterater의 끝에 있는 특수 node의 주소
vname.erase(주소)		해당 주소에 있는 vector 지움(나머진 알아서 link됨)		주소는 (vname.begin() + i)
vname.insert(주소,값)	지정된 주소 바로 앞에 값을 넣음

vname.at(index)			vector의 인덱스로 접근하기
vname[index]			vector의 인덱스로 접근하기

vname.size()			vector의 사이즈
*/

#include<iostream>
#include<vector>

using namespace std;

class Person {
public:
	int age;
	Person() {
		age = 0;
	}
};

int main() {
	// 동적 배열
	cout << "-----동적 배열-----" << endl;
	Person p[10];
	for (auto& i : p) {		// reference로 읽어오면, 속도가 빨라짐(원래는 값을 복사하느라 느림)
		cout << i.age << endl;
	}

	// 벡터
	cout << endl <<  "-----벡터-----" << endl;
	vector<int>	ivector;
	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);
	ivector.push_back(40);

	cout << "is empty : " << ivector.empty() << endl;		// 비어 있는가?
	cout << "front : " << ivector.front() << endl;			// 맨 앞
	cout << "back : " << ivector.back() << endl;			// 맨 뒤
	ivector.pop_back();										// 맨 뒤를 없앰 (리턴값 없음)
	cout << "pop 후의 back : " << ivector.back() << endl;

	for (auto& i : ivector) {
		cout << i << " ";
	}
	cout << endl;

	// 벡터 - iterater
	cout << endl << "-----벡터 - iterater-----" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}

	ivector.erase(ivector.begin() + 1);
	ivector.pop_back();

	cout << endl << "erase 후" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}

	ivector.insert(ivector.begin() + 1, 999);
	cout << endl << "insert 후" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}
	
	cout << endl << "index로 접근" << endl;
	for (int i = 0; i < ivector.size(); i++) {
		cout << ivector[i] << endl;
		//cout << ivector.at(i) << endl;
	}

	return 0;
}