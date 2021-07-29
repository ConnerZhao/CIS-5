#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_ROWS = 4, NUM_COLS = 3;

void read(string name[NUM_ROWS][NUM_COLS]);

void displaySeatingChart(string name[][NUM_COLS]);

int main() {

	string name[NUM_ROWS][NUM_COLS];

	read(name);
	displaySeatingChart(name);

	system("pause");
	return 0;
}

void read(string name[][NUM_COLS]) {

	ifstream Names;
	Names.open("test.txt");

	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			Names >> name[i][j];
		}
	}
	Names.close();
}

void displaySeatingChart(string name[][NUM_COLS]) {

	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			cout << setw(10) << name[i][j];
		}
		cout << endl;
	}
}