// Fupeng Zhao

// CIS-5 Online

// July 14th, 2021

// Mid term

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

// Global var
float averageScore;

// Global CONSTANT var
const string MISTAKE = "\nYou input is INVALID, please try again.\n", EXIT = "Thank you!\n";
const float MIN = 0.00, MAX = 10.00;

// Init Functions
void fun1();
void fun2();
void three();
void five();

// Main Function
int main() {
	// Declare Var
	string name;
	char in1, repeat;

	// Init outputs
	cout << "Welcome!\n";
	cout << "How many judges will there be for this competition?\n";
	cout << "Input 1 for 3 judges\n";
	cout << "Input 2 for 5 judges\n";
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
		cout << "\nThank you for using this program. \n";
		return 0;
	}

	// Asks if the user would like to repeat
	cout << "Would you like to run the program again?(Y or N) ";
	cin >> repeat;

	if (repeat == 'Y' || repeat == 'y') {
		main();
	}
	else if (repeat == 'N' || repeat == 'n') {
		cout << "\nThank you for using this program. \n";
		return 0;
	}
}

// Function for 3 Judges
void fun1() {
	// var
	int numOfPeople, temp = 1;
	// Asks how many people are in this competition
	cout << "Enter the amount of people that are in this competition. (1-20) ";
	cin >> numOfPeople;
	
	while (temp <= numOfPeople) {
		three();
		temp++;
	}
	cout << "The final average score is " << averageScore << endl;
}

// Function for 5 Judges
void fun2() {
	// Asks how many people are in this competition
	int numOfPeople, temp = 1;
	cout << "Enter the amount of people that are in this competition. (1-20) ";
	cin >> numOfPeople;

	while (temp <= numOfPeople) {
		five();
		temp++;
	}
	cout << "The final average score is " << averageScore << endl;
}

// Algorithm for 5 Judges
void five() {
	float s1, s2, s3, s4, s5, avgs, maxScore, minScore, c1, c2, c3, c4, m1, m2, m3, m4;
	// First Judge
	cout << "Enter the first judges score (0-10): ";
	cin >> s1;

	while (s1 > MAX || s1 < MIN) {
		cout << MISTAKE;
		cin >> s1;
	}

	// Second Judge
	cout << "Enter the second judges score (0-10): ";
	cin >> s2;

	while (s2 > MAX || s2 < MIN) {
		cout << MISTAKE;
		cin >> s2;
	}

	// Third Judge
	cout << "Enter the third judges score (0-10): ";
	cin >> s3;

	while (s3 > MAX || s3 < MIN) {
		cout << MISTAKE;
		cin >> s3;
	}

	// Fourth Judge
	cout << "Enter the fourth judges score (0-10): ";
	cin >> s4;

	while (s4 > MAX || s4 < MIN) {
		cout << MISTAKE;
		cin >> s4;
	}

	// Fifth Judge
	cout << "Enter the fifth judges score (0-10): ";
	cin >> s5;

	while (s5 > MAX || s5 < MIN) {
		cout << MISTAKE;
		cin >> s5;
	}

	// Finding the MAX value
	c1 = max(s1, s2);
	c2 = max(s3, s4);
	c3 = max(c1, s5);
	c4 = max(c2, s5);
	maxScore = max(c3, c4);

	// Finding the MIN value
	m1 = min(s1, s2);
	m2 = min(s3, s4);
	m3 = min(m1, s5);
	m4 = min(m2, s5);
	minScore = min(m3, m4);

	// Adds every score together and by subtracting the MAX and MIN value. It meets the criteria.
	cout << "The MAX score is: " << maxScore << endl << "The MIN score is: " << minScore << endl;
	avgs = ((s1 + s2 + s3 + s4 + s5) - maxScore - minScore) / 3;
	averageScore += avgs;
	cout << "\nThe score for this person is " << avgs << endl << endl;
}

// Algorithm for 3 Judges
void three() {
	// Var
	float s1, s2, s3, avgs;
	cout << "Enter the first judges score (0-10): ";
	cin >> s1;
	// Checks if the user input is valid
	while (s1 > MAX || s1 < MIN) {
		cout << MISTAKE;
		cin >> s1;
	}

	cout << "Enter the second judges score (0-10): ";
	cin >> s2;

	while (s2 > MAX || s2 < MIN) {
		cout << MISTAKE;
		cin >> s2;
	}

	cout << "Enter the third judges score (0-10): ";
	cin >> s3;

	while (s3 > MAX || s3 < MIN) {
		cout << MISTAKE;
		cin >> s3;
	}
	// Adds all scores and finds the average
	avgs = (s1 + s2 + s3) / 3;
	averageScore += avgs;
	cout << "\nThe score for this person is " << avgs << endl << endl;
}
iLoveGuys11