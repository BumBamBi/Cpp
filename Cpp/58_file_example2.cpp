/*
	fstream의 input output method 활용

	// get()
	// put()

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	{
		ifstream input_file("data.txt");
		ofstream output_file("data_copy1.txt");

		if (input_file.fail() == true) {
			cout << "unable" << endl;
			exit(0);
		}

		if (output_file.fail() == true) {
			cout << "unable" << endl;
			exit(0);
		}

		char c;
		while (input_file.eof() == false) {
			input_file.get(c);	// 값 읽어오기
			cout << c;		// 콘솔 출력
			output_file.put(c);	// 파일에 출력


			// input_file >> c;
			// output_file << c;
			// 위 두 방식은, space, \n 등을 무시하고 읽고 출력함
		}
	}


	cout << endl << "----------------------" << endl;

	// 줄 단위로 읽고, 출력하기 --------------------
	{
		ifstream input_file("data.txt");
		ofstream output_file("data_copy2.txt");

		if (input_file.fail() == true) {
			cout << "unable" << endl;
			exit(0);
		}

		if (output_file.fail() == true) {
			cout << "unable" << endl;
			exit(0);
		}

		string s;
		while (input_file.eof() == false) {
			getline(input_file, s);
			cout << s << endl;
			output_file << s << endl;
		}
	}
	return 0;
}