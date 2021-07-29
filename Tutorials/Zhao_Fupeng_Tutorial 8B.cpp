#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream outputFile;
	ifstream inFile;
	string name1, name2, name3;
	
	cout << "Now writing information.\n";

	inFile.open("test2.txt");
	outputFile.open("test.txt");

	cout << "Reading the names from test2.txt\n";
	getline(inFile, name1);
	getline(inFile, name2);
	getline(inFile, name3);

	outputFile << name1 << endl;
	outputFile << name2 << endl;
	outputFile << name3 << endl;

	outputFile.close();

	cout << "Complete.\n";

	system("pause");
	return 0;
}