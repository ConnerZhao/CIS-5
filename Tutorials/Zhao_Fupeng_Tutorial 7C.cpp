#include <iostream>
using namespace std;

int addNums(int num1, int num2);
int addNums(int num1, int num2, int num3);
double addNums(double num1, double num2);

int main() {
	int result;
	double answer;

	result = addNums(5, 7);
	
	cout << "Result= " << result << endl;

	answer = addNums(5.2, 7.1);

	cout << "Anwser= " << answer << endl;

	result = addNums(110,220,330);

	cout << "Result= " << result << endl;

	system("pause");
	return 0;
}

int addNums(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}
double addNums(double num1, double num2) {
	double sum = num1 + num2;
	return sum;
}
int addNums(int num1, int num2, int num3) {
	int sum = num1 + num2 + num3;
	return sum;
}