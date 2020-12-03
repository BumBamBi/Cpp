/*
	fstream�� input output method Ȱ��

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
			input_file.get(c);	// �� �о����
			cout << c;		// �ܼ� ���
			output_file.put(c);	// ���Ͽ� ���


			// input_file >> c;
			// output_file << c;
			// �� �� �����, space, \n ���� �����ϰ� �а� �����
		}
	}


	cout << endl << "----------------------" << endl;

	// �� ������ �а�, ����ϱ� --------------------
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