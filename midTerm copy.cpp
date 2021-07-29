// Fupeng Zhao

// CIS-5 Online

// July 14th, 2021

// Mid term

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// Declare Global Var
string name;
float score, avg, total;
const string MISTAKE = "\nYou input is INVALID, please try again.\n", EXIT = "Thank you!\n";

float fun1();
float fun2();
void output();
void exit();

int main() {
	// Declare Var
	char in1;


	// Init outputs
	cout << fixed << setprecision(1);
	cout << "Welcome!\n";
	cout << "How many judges will there be for this competition?\n";
	cout << "Input 1 for 3 judges\n";
	cout << "Input 2 for 3 judges\n";
	cout << "Input 3 for Exit\n";
	cin >> in1;

	// Main
	if (in1 == '1') {
		fun1();
	}
	else if (in1 == '2') {
		fun2();
	}
	else if (in1 == '3') {
		exit();
	}
	else
		cout << MISTAKE << EXIT;
}

float fun1() {
	int ppl, test;
	cout << "How many people will be in the compeition? (1-20):";
	cin >> ppl;
	while (ppl >= 1 && ppl <= 20) {
		for (int i = 0; i < ppl; i++) {
			test = 0;
			score = 0.00, avg = 0.00, total = 0.00;

			cout << "Enter the name for " << i + 1 << ": "; \
				getline(cin, name);

			while (test < 3) {
				cout << "Enter the judges score (0-10): ";
				cin >> score;
			}while (!(score <= 10.0 && score >= 0.0)) {
				cout << MISTAKE << endl;
				cout << "Enter the judges score (0-10): ";
				cin >> score;
			}
			test++;
			total += score;
			return score;
		}
	}
}