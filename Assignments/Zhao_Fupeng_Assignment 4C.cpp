#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	
	int result, min = 100, max = 999, num1, num2,answer;
	char selection;
	cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Quit\nPlease make a selection from 1 to 5: ";
	cin >> selection;
	switch (selection) {
	case '1':
		num1 = rand() % (max - min + 1) + min;
		
		min = 10;
		max = 99;
		num2 = rand() % (max - min + 1) + min;
		result = num1 + num2;
		cout << "You've chosen addition.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "-  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
			}
		break;
	case '2':
		num1 = rand() % (max - min + 1) + min;

		min = 10;
		max = 99;
		num2 = rand() % (max - min + 1) + min;
		result = num1 - num2;
		cout << "You've chosen subtraction.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "+  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
	case '3':
		num1 = rand() % (max - min + 1) + min;

		min = 10;
		max = 99;
		num2 = rand() % (max - min + 1) + min;
		result = num1 * num2;
		cout << "You've chosen Multiplication.\n";
		cout << "\nInput your answer.\n";
		cout << setw(5) << num1 << endl;
		cout << "x  " << num2 << endl;
		cout << "______" << endl;
		cin >> answer;
		if (answer == result) {
			cout << "You got it!";
		}
		else {
			cout << "The correct answer is: " << result << endl;
		}
		break;
	case '4':
		cout << "This function isn't ready! Please come back again later! \n";
	case '5':
		exit(0);
	}
}