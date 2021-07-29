// Fupeng Zhao

// CIS-5 Online

// July 7th, 2021

// Number Guessing Game
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const int MIN = 1, MAX = 500, NUM1 = (rand() % MAX - MAX + 1);
    int guess = 0, attemps = 0;
    while (guess != NUM1) {
        cout << "Please enter a random number from 1 to 500: \n";
        cin >> guess;
        if (guess > NUM1) {
            cout << "\nThe number you entered is to big, please try again.\n";
        }
        else if (guess < NUM1) {
            cout << "\nThe number you entered is to small, please try again.";
        }
        else if (guess == NUM1) {
            cout << "\nGood job! You got it!" << endl;
        }
        attemps++;
        cout << "\nAttemps: " << attemps << endl;
    }
}