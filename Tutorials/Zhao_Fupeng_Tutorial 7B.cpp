#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void enemyHealth(int damage);

int main() {
	int min = 1, max = 20, num;
	int seed = time(0);

	enemyHealth(5);
	enemyHealth(10);

	num = min + rand() % max;
	cout << "num = " << num << endl;
	enemyHealth(num);

	system("pause");
	return 0;
}

void enemyHealth(int damage) {
	static int eHealth = 100;

	eHealth -= damage;

	cout << eHealth << endl;
}