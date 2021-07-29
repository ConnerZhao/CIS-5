#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int size, * testScores;
	cout << "How many test scores?"; 
	cin >> size;

	testScores = new int[size];

	for (int index = 0; index < size; index++) {
		cout << "Enter score number " << (index + 1) << endl;
		cin >> testScores[index];
	}

	delete[] testScores;
	testScores = 0;
}