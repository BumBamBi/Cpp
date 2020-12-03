// 값을 함수로 넘겨줄 때, 그냥 넘기면 원본 데이터는 안바뀜
// 따라서 reference를 통해서 넘겨주는 방식 (포인터와 비슷하지만, 훨신 더 간편!)

#include<iostream>

using namespace std;

class Person {
public:
	int age;
};

void func1(Person p_of_func) {
	p_of_func.age = p_of_func.age * 2;
}

// 인자가 레퍼런스임(별명)
void func2(Person& p_of_func) {
	p_of_func.age = p_of_func.age * 2;
}

int main() {
	Person a;
	a.age = 24;
	// 인자로 객체를 넣으면 복사되어서 원본은 안변함
	func1(a);
	cout << a.age << endl;

	// 위와 동일하지만, 함수 인자가 레퍼런스로 읽어와서 원본이 변함
	func2(a);
	cout << a.age << endl;

}