// Fupeng Zhao

// CIS-5 Online

// July 12th, 2021

// Math Tutor with Loops
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

void addition();  // function header
void subtraction(); // function header
void multiplication(); // function header
void division(); //function division
bool isValid(int num);   // function header
int displayMenu();  // function header

int main()
{
	displayMenu();
}

int displayMenu() {
	int selection;
	cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Quit\nPlease make a selection from 1 to 5: ";
	cin >> selection;
	if (isValid(selection)){
		switch (selection) {
			// addition
		case '1':
			// Num Generation
			addition();
			break;
		case '2':
			subtraction();
			break;
		case '3':
			multiplication();
			break;
		case '4':
			division();
			break;
		case '5':
			exit(0);
		default:
			cout << "\n\n";
		}
	}
}

bool isValid(int num) {
	int max = 5, min = 1;
	if (num > max || num < min) {
		cout << "Please remake you selection.\n";
		return true;
	}
	else {
		return false;
	}
}

// Addition Function
void addition() {
	int result, min = 100, max = 999, num1, num2, answer, attemps = 1;
	min = 2;
	max = 500;
	num1 = rand() % (max - min + 1) + min;
	min = 1;
	max = 99;
	num2 = rand() % (max - min + 1) + min;
	//	Calculates Result
	result = num1 + num2;
	cout << "You've chosen addition.\n";
	cout << "\nInput your answer.\nYou only have 3 attemps\n";
	cout << setw(5) << num1 << endl;
	cout << "+  " << num2 << endl;
	cout << "______" << endl;
	cin >> answer;
	//	Answer Checking
	while (answer != result) {
		cout << "Please try again, attemp " << attemps << endl;
		cin >> answer;
		attemps++;
		if (answer == result && attemps <= 3){
			cout << "Good job!\n";
			system("pause");
			break;
		}
		else if (attemps >= 3) {
			cout << "Good attemp, the correct answer is " << result << endl;
			system("pause");
			break;
		}
	}
}

// Subtraction Function
void subtraction() {
	int result, min = 100, max = 999, num1, num2, answer, attemps = 1;
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
	while (answer != result) {
		cout << "Please try again, attemp " << attemps << endl;
		cin >> answer;
		attemps++;
		if (answer == result && attemps <= 3) {
			cout << "Good job!\n";
			system("pause");
			break;
		}
		else if (attemps >= 3) {
			cout << "Good attemp, the correct answer is " << result << endl;
			system("pause");
			break;
		}
	}
}

// Multiplication Function
void multiplication() {
	int result, min = 100, max = 999, num1, num2, answer, attemps = 1;
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
	while (answer != result) {
		cout << "Please try again, attemp " << attemps << endl;
		cin >> answer;
		attemps++;
		if (answer == result && attemps <= 3) {
			cout << "Good job!\n";
			system("pause");
			break;
		}
		else if (attemps >= 3) {
			cout << "Good attemp, the correct answer is " << result << endl;
			system("pause");
			break;
		}
	}
}

// Division Function
void division() {
	int result, min = 100, max = 999, num1, num2, answer, attemps = 1;
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
	while (answer != result) {
		cout << "Please try again, attemp " << attemps << endl;
		cin >> answer;
		attemps++;
		if (answer == result && attemps <= 3) {
			cout << "Good job!";
			system("pause");
			break;
		}
		else if (attemps >= 3) {
			cout << "Good attemp, the correct answer is " << result << endl;
			system("pause");
			break;
		}
	}
}