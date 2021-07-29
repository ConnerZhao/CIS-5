#include <iostream>
#include "headers.h"
#include <string>

using namespace std;

int main() {
	person cis5[3];

	for (int i = 0; i < 3; i++) {
		cout << "Student Number " << i + 1 << endl;
		cout << "Name: ";
		cin >> cis5[i].name;
		cout << "Age: ";
		cin >> cis5[i].age;
		cout << "Height: ";
		cin >> cis5[i].height;
		cout << "Eye color: ";
		cin >> cis5[i].eyeColor;
	}

	for (int i = 0; i < 3; i++) {
		cout << "Student # " << i + 1 << cis5[i].name << "age: " << cis5[i].age
			<< " your height = " << cis5[i].height << " your eye color is " << cis5[i].eyeColor << endl;
	}

	system("pause");
	return 0;
}