// Fupeng Zhao

// CIS-5 Online

// July 3rd, 2021

// Lab 3B: Find the Hypotenuse

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	// Init variables
	string fullName, time;
	float side1, side2, hypot;

	// Info gathering
	cout << "Welcome, please your full name: ";
	getline(cin, fullName);
	cout << "Welcome " << fullName << " what time does your class meet? (Monday - Friday and a specific time): ";
	getline(cin, time);
	cout << "What is the length of your first side?" << endl;
	cin >> side1;
	cout << "What is the length of your second side?" << endl;
	cin >> side2;

	cout << "You entered " << side1 << " for side 1, and " << side2 << endl;

	// Calculations
	hypot = sqrt((pow(side1, 2) + pow(side2, 2)));

	// Outputs
	cout << fullName << ", the time your class meets is, " << time << endl;
	cout << "The First side of your triangle is " << side1 << " The Second side of your triangle is " << side2 << "\n The hypotenuse of your triangle is : " << setprecision(4) << setw(8) << hypot << endl;

	return 0;
}