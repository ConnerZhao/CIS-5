#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string test = "Hello world.", name;
	cout << "Hello world. has this amount of characters: " << test.length() << endl;
	getline(cin, name);
	cout << "Welcome, " << name << endl;
	double x = 5.5050505050505;
	cout << fixed << setprecision(2);
	cout << x << endl;
	return 0;
}