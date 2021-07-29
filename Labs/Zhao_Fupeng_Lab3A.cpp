// Fupeng Zhao

// CIS-5 Online

// July 3rd, 2021

// Lab 3A: Area of a Cookie

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	// Init variables
	string fullName, studentID, typeCookie;
	double sizeCookie;
	float area, rad, pi = 3.14159;;

	// Info gathering
	cout << "Welcome, please your full name ";
	getline(cin, fullName);
	cout << "Hello, " << fullName << "Please enter your student ID. ";
	getline(cin, studentID);
	cout << "What type of cookie would you like? (chocolate chip, oatmeal raisin, or snickerdoodle)";
	getline(cin, typeCookie);
	cout << "What size of the cookie do you want? (6 inch, 8 inch, or 12 inch)" << endl;
	cin >> sizeCookie;
	cout << fullName << ', ' << studentID << " Chose " << sizeCookie << " and a size of  " << typeCookie << endl;

	// Calculations
	rad = static_cast<float>(sizeCookie) / 2;
	area = (pow(rad,2)) * pi;
	
	// Outputs
	cout << "The Area of your cookie is : " << setprecision(5) << area << endl;
}