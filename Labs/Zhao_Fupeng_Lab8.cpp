#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// File Output/Input file open
	ifstream read;
	ofstream write;
	read.open("test.txt");
	write.open("test2.txt");

	int total = 0, avg, high = 0, low = 100000, count = 0;

	while (!read.eof()) {
		// Calculation
		count++;
		read >> total;
		if (total > high) {
			high = total;
		}
		else if (total < low) {
			low = total;
		}

		avg = total / count;

		// Outputs
		cout << "Number: " << count << endl;
		cout << "The total: " << total << endl;
		cout << "The average: " << avg << endl << endl;


		if (read.eof()) {

			// Output file write
			write << "Number: " << count << endl;
			write << "The total: " << total << endl;
			write << "The average: " << avg << endl << endl;
			write << "Highest number: " << high << endl;
			write << "Lowest number: " << low << endl;

			cout << "Highest number: " << high << endl;
			cout << "Lowest number: " << low << endl;
			cout << "End of file, now closing.\n";
			read.close();
		}
	}

}