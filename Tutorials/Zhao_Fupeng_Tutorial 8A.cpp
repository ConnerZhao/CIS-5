#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream outputFile;
	
	cout << "Now writing information.\n";

	outputFile.open("test.txt");

	outputFile << "Ethan Morris\n";
	outputFile << "Yasin Abadalla\n";
	outputFile << "Srikar Mannam\n";
	outputFile << "Seth Gale\n";
	outputFile << "Alex Chu\n";

	outputFile.close();

	cout << "Complete.\n";

	system("pause");
	return 0;
}