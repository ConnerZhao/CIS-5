#include <iostream>
using namespace std;

void addten(int &num);

int main() {
	int number = 25;
	
	cout << "Address of number" << &number << endl;
	cout << "number= " << number << endl;

	addTen(number);
	
	cout << "Address of number" << &number << endl;
	cout << "number= " << number << endl;

	system("pause");
	return 0;
}

void addTen(int& num) {
	num = num + 10;

	cout << "Address of num" << &num << endl;
	cout << "num= " << num << endl;
}