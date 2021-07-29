#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void printList(int numList[], int size);
int countIt(int list[], int size, int numToCount);
void resetList(int newList[], int size);

int main() {
	srand(time(0));
	const int SIZE = 10;
	int numArray[SIZE];

	cout << numArray << endl;

	for (int i = 0; i < SIZE; i++) {
		numArray[i] = rand() % 3 + 1;
	}

	printList(numArray, SIZE);

	cout << countIt(numArray, SIZE, 2);
	cout << "The number 2 occurs " << count << " times in the list." << endl;
	
	resetList(numArray, SIZE);
	printList(numArray, SIZE);

	system("pause");
	return 0;
}

void printList(int numList[],int size) {

	cout << numList << endl;

	for (int i = 0; i < size; i++) {
		cout << numList[i];
	}
}

int countIt(int list[], int size, int numToCount) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (list[i] == numToCount) {
			count++;
		}
		return count;
	}
}

void resetList(int newList[], int size) {
	for (int i = 0; i < size; i++) {
		newList[i] = 0;
	}
}