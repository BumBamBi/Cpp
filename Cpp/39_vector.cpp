/* 
vector�� �̿��Ͽ� SLL�� �ٷ� ��밡��
vector<data_type> ������;

vname.push_back()		�ڿ� �ٿ� �ֱ�
vname.front()			�� ��
vname.back()			�� ��
vname.pop_back()		�ڿ��ִ°Ÿ� ���ֹ���
vname.empty()			����ִ��� Ȯ��

vname.begin()			�� vector�� iterater(vector���� �������� �ּҵ�)�� �о��
vname.end()				iterater�� ���� �ִ� Ư�� node�� �ּ�
vname.erase(�ּ�)		�ش� �ּҿ� �ִ� vector ����(������ �˾Ƽ� link��)		�ּҴ� (vname.begin() + i)
vname.insert(�ּ�,��)	������ �ּ� �ٷ� �տ� ���� ����

vname.at(index)			vector�� �ε����� �����ϱ�
vname[index]			vector�� �ε����� �����ϱ�

vname.size()			vector�� ������
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
	// ���� �迭
	cout << "-----���� �迭-----" << endl;
	Person p[10];
	for (auto& i : p) {		// reference�� �о����, �ӵ��� ������(������ ���� �����ϴ��� ����)
		cout << i.age << endl;
	}

	// ����
	cout << endl <<  "-----����-----" << endl;
	vector<int>	ivector;
	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);
	ivector.push_back(40);

	cout << "is empty : " << ivector.empty() << endl;		// ��� �ִ°�?
	cout << "front : " << ivector.front() << endl;			// �� ��
	cout << "back : " << ivector.back() << endl;			// �� ��
	ivector.pop_back();										// �� �ڸ� ���� (���ϰ� ����)
	cout << "pop ���� back : " << ivector.back() << endl;

	for (auto& i : ivector) {
		cout << i << " ";
	}
	cout << endl;

	// ���� - iterater
	cout << endl << "-----���� - iterater-----" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}

	ivector.erase(ivector.begin() + 1);
	ivector.pop_back();

	cout << endl << "erase ��" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}

	ivector.insert(ivector.begin() + 1, 999);
	cout << endl << "insert ��" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++) {
		cout << *p << " " << endl;
	}
	
	cout << endl << "index�� ����" << endl;
	for (int i = 0; i < ivector.size(); i++) {
		cout << ivector[i] << endl;
		//cout << ivector.at(i) << endl;
	}

	return 0;
}