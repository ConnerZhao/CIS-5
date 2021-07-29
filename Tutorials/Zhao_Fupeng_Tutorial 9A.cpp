#include <iostream>
#include <string>

using namespace std;

int main() {
	const int SIZE = 50;
	int test1[SIZE] = { 0 };
	string name[SIZE];
	

	for (int index = 0; index < SIZE; index++) {
		cout << test1[index] << endl;
		cout << "Input a name " << index + 1 << endl;
		getline(cin, name[index]);

		cout << "Input a score " << endl;
		cin >> test1[index];

		cin.ignore();
	}

	for (int index = 0; index < SIZE; index++) {
		cout << name[index] << ", your score on test1 = " << test1[index] << endl;
	}

	system("pause");
	return 0;
}