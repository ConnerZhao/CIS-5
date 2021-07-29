// Fupeng Zhao

// CIS-5 Online

// July 7th, 2021

// Math Tutor with Loops
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{

	int result, min = 100, max = 999, num1, num2, answer;
	char selection;
	// Welcome Message
	cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Quit\nPlease make a selection from 1 to 5: ";
	cin >> selection;

	switch (selection) {
	// addition
	case '1':
		// Num Generation
		min = 2;
		max = 500;
		num1 = rand() % (max - min + 1) + min;
		min = 1;
		max = 99;
		num2 = rand() % (max - min + 1) + min;
		//	Calculates Result
		result = num1 + num2;
		cout << "You've chosen addition.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "+  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		//	Answer Checking
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
	case '2':
		// Num Generation
		min = 2;
		max = 500;
		num1 = rand() % (max - min + 1) + min;
		min = 1;
		max = 500;
		num2 = rand() % (max - min + 1) + min;
		//	Calculates Result
		result = num1 - num2;
		cout << "You've chosen subtraction.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "-  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		//	Answer Checking
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
	case '3':
		// Num Generation
		min = 1;
		max = 12;
		num1 = rand() % (max - min + 1) + min;
		num2 = rand() % (max - min + 1) + min;
		//	Answer Checking
		result = num1 * num2;
		cout << "You've chosen Multiplication.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "x  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		//	Answer Checking
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
	case '4':
		// Num Generation
		min = 10;
		max = 999;
		num1 = rand() % (max - min + 1) + min;
		min = 1;
		max = 99;
		num2 = rand() % (max - min + 1) + min;
		// While loop for Division
		while ((num1 % num2) != 0) {
			num2 = rand() % (max - min + 1) + min;
		}
		//	Calculates Result
		result = num1 / num2;
		cout << "You've chosen Division.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "/  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		//	Answer Checking
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
		break;
	case '5':
		exit(0);
	default:
		cout << "\nPlease make a selection\n";
	}
	
}