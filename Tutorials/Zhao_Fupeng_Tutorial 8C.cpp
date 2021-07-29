#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream outputFile;
	ifstream salesData;
	int numberOfDays, count = 0;
	double sales, total = 0;

	cout << "For how many days do you have sales? ";
	cin >> numberOfDays;

	salesData.open("DailySales.txt");

	outputFile.open("Sales.txt");	

	while (salesData >> sales) {
		cout << sales << endl;
		total += sales;
	}

	outputFile << total << endl;
	cout << total << endl;

	outputFile.close();
	cout << "Data written to Sales.txt\n";

	system("pause");
	return 0;
}