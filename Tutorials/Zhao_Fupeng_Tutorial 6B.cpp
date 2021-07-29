#include <iostream>
using namespace std;

void displayValue(int x);
int calcSum(int num1, int num2, int num3);

int main()
{
	int value1, value2, value3,sum;
	value1 = 16;
	value2 = 36;
	value3 = 66;

	displayValue(value1); // call a void function, 6 is the argument
	displayValue(value2);
	displayValue(value3);
	displayValue(666);
	displayValue(677);

	cout << "This is main \n";

	sum = calcSum(value1, value2, value3);

	cout << "Back in main \n";
	cout << "Sum = " << sum << endl << endl;
	system("pause");
	return 0;
}

void displayValue(int x) {
	cout << "The value of x in displayValue function = " << x << endl;
}

int calcSum(int num1, int num2, int num3) {
	int total;
	
	total = num1 + num2 + num3;
	cout << " In calcSum function\n";

	return total;
}