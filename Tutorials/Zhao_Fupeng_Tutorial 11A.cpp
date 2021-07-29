#include <iostream>
#include "headers.h"
#include <string>

using namespace std;

int main() {
	person rbg;
	person ada;

	rbg.name = "Ruth";
	rbg.age = 15;
	rbg.height = 61;
	rbg.eyeColor = "Blue";

	ada.name = "Ada";
	ada.age = 99;
	ada.height = 100;
	ada.eyeColor = "Green";

	cout << "Name: " << rbg.name << endl;
	cout << "Age: " << rbg.age<< endl;
	cout << "Height: " << rbg.height << endl;
	cout << "Eye color: " << rbg.eyeColor << endl;

	cout << "Name: " << ada.name << endl;
	cout << "Age: " << ada.age << endl;
	cout << "Height: " << ada.height << endl;
	cout << "Eye color: " << ada.eyeColor << endl;

	system("pause");
	return 0;
}