#include <iostream>
#include <string>

using namespace std;

int main() {
	int numberList[5] = { 1, 2, 3, 4, 5 };
	int numberGrid[3][2] = { { 1,2 }, { 3,4 }, { 5,6 } };
	
	cout << "1D Array\n";
	for (int i = 0; i < 5; i++) {
		cout << numberList[i] << ", ";
	}
	cout << "\n2D Array\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << numberGrid[i][j] << ", ";
		}
	}
}
