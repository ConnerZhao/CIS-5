// Fupeng Zhao

// CIS-5 Online

// July 7th, 2021

// Grade Book with nested loops
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int studentCount;
	string studentName;
	char dec;

	cout << "friendly welcome messag\n";
	cout << "Enter number of students.\n";

	cin >> studentCount;

	do {
		for (int i = 0; i < studentCount; i++) {
			cout << "What is your name?";
			cin >> studentName;

			int testCount;

			do {
				cout << "How many tests would you like to input? Between 2 and 5.\n";
				cin >> testCount;

			} while (testCount < 2 && testCount > 5);

				double total = 0;
				double lowest = 100;

				for (int j = 0; j < testCount; j++) {

					int score;

					do {
						cout << "Enter a score between 0 and 100.\n";
						cin >> score;

					} while (score < 0 && score > 100);
					if (score < lowest) {
						lowest = score;
					}
					total = total + score;
			}
            
			double avg = total / testCount;
			cout << "Name: " << studentName << endl;
			cout << "Lowest grade is " << lowest << endl;
			cout << "The total is " << total << endl;
			cout << "Average is " << avg << endl;

		}
		cout << "Would you like to run the program again? ";
		cin >> dec;
	}while (dec == 'Y' || dec == 'y');
	
}