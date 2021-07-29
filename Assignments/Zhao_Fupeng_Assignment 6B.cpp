#include <iostream>
#include <string>
using namespace std;

// Proto 
void displayRes(string name, float avg);
int scoreGather();
float calAvg(int t1, int t2, int t3);
bool valid(int num, int min, int max);
void prime();

int main() {
	// Repeat algro
	prime();
	return 0;
}

void prime() {
	// Declare Var
	string fullname;
	int test1, test2, test3;
	float average;
	char rep;
	// Name
	cout << "Student Name: ";
	cin >> fullname;

	// Calling Score Gathering Function
	test1 = scoreGather();
	test2 = scoreGather();
	test3 = scoreGather();

	// Calling Average Calculating Function
	average = calAvg(test1, test2, test3);
	
	// Calling Result Displaying function
	displayRes(fullname, average);

	// Ask the user if they want to repeat the program
	cout << "Would you like to repeat? ";
	cin >> rep;
	if (rep == 'Y' || rep == 'y')
	{
		main();
	}
	else
		system("pause");
}

// Result Displaying function
void displayRes(string name, float avg) {
	cout << "-------------------------------------\n";
	cout << "norco College \n";
	cout << "CIS-5: Intro to Programming with C++ \n";
	cout << "Student Average \n";
	cout << "-------------------------------------\n";

	cout << name << ": " << avg << endl;
}

// Score Gathering Function
int scoreGather() {
	int testa, min = 0, max = 100; // Scope

	cout << "Enter a test score:	";
	cin >> testa;

	while (!valid(testa, min, max)) {
		cout << "The score you entered in invalid, please try again:	";
			cin >> testa;
	}
	return testa;
}

// Average Calculating Function
float calAvg(int t1, int t2, int t3) {
	float avrg;// Scope

	avrg = (t1 + t2 + t3) / 3.0;
	
	return avrg;
}

// Valid Checking
bool valid(int num, int min, int max) {
	if (num < min || num > max) {
		return false;
	}
	else
		return true;
}