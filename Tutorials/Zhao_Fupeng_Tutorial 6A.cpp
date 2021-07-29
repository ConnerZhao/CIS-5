#include <iostream>
using namespace std;

void displayHello();
void displayGoodbye();

int main() {
	int num = 10;

	for (int i = 1; i <= num; i++) {
		cout << i << ': ';
		displayHello;
	}
	displayHello();
	displayGoodbye();

	system("pause");
	return 0;
}
void displayHello() {
	cout << "Hello \n";
}

void displayGoodbye() {
	cout << "Goodbye \n";
}