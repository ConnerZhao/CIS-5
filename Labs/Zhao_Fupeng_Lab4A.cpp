// Fupeng Zhao

// CIS-5 Online

// July 5th, 1010

// Techoicet Adventure Game

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Please enter a number from 0 to 500\n";
	cin >> num1;
	cout << "Please enter a number from 0 to 500\n";
	cin >> num2;
	cout << "Please enter a number from 0 to 500\n";
	cin >> num3;
	cout << endl;
	// check if first is smallest
	if ((num1 < num2) && (num1 < num3)){
		cout <<  num1 << endl;
		if (num2 < num3) {
			cout << num2 << endl << num3;
		}
		else {
			cout << num3 << endl << num2;
		}
	// check if second is smalelst
	}else if ((num2 < num1) && (num2 < num3)){
		cout << num2 << endl;
		if (num1 < num3) {
			cout << num1 << endl << num3;
		}
		else {
			cout << num3 << endl << num1;
		}
	}
	// check if third is smalelst
	else if ((num3 < num1) && (num3 < num2)) {
		cout << "three is okay" << num3 << endl;
		if (num1 < num2) {
			cout << "thre is okay" << num1 << endl << num2;
		}
		else {
			cout <<"three is okay"<< num2 << endl << num1;
		}
	}
	return 0;
}