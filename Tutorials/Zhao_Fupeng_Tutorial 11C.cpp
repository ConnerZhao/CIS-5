#include <iostream>
#include "headers.h"
#include <string>

using namespace std;

void getStudent(person x[], int size);
void display(person y[], int size);

int main() {
	const int SIZE = 3;
	person cis5[3];

	getStudent(cis5, SIZE);

	display(cis5, SIZE);

	system("pause");
	return 0;
}

void getStudent(person x[],int size) {
	person x;
	for (int i = 0; i < size; i++) {
		cout << "Student Number " << i + 1 << endl;
		cout << "Name: ";
		cin >> x[i].name;
		cout << "Age: ";
		cin >> x[i].age;
		cout << "Height: ";
		cin >> x[i].height;
		cout << "Eye color: ";
		cin >> x[i].eyeColor;
	}
}

void display(person y[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Student # " << i + 1 << y[i].name << "age: " << y[i].age
			<< " your height = " << y[i].height << " your eye color is " << y[i].eyeColor << endl;
	}
}