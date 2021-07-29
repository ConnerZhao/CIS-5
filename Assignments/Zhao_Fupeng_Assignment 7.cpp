#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void prime();

//*******************************************************************************************************

int main() {
	// Repeat algro
	prime();
	return 0;
}

void prime()
{
	char human, rep;
	int	ai, Hwin = 0, CWin = 0;
	
	srand(static_cast<unsigned int> (time(0)));
	ai = (rand() % 3) + 1;
	cout << "Rock-Paper-Scissors Game!" << endl;
	cout << "Please choose your symbol:" << endl;
	cout << "R for rock; P for paper; S for scissor: ";
	cin >> human;
	if ((human == 'R' || human == 'r') && (ai == 1))
	{
		cout << "The computer chose Paper." << endl;
		cout << "You lose better luck next time!" << endl;
		CWin++;
	}
	else if ((human == 'R' || human == 'r') && (ai == 3))
	{
		cout << "The computer chose Rock." << endl;
		cout << "The match is a draw!" << endl;
	}
	else if ((human == 'R' || human == 'r') && (ai == 2))
	{
		cout << "The computer chose Scissors." << endl;
		cout << "Victory!" << endl;
		Hwin++;
	}
	else if ((human == 'P' || human == 'p') && (ai == 1))
	{
		cout << "The computer chose Paper." << endl;
		cout << "The match is a draw!" << endl;
	}
	else if ((human == 'P' || human == 'p') && (ai == 3))
	{
		cout << "The computer chose Rock." << endl;
		cout << "Victory!" << endl;
		Hwin++;
	}
	else if ((human == 'P' || human == 'p') && (ai == 2))
	{
		cout << "The computer chose Scissors." << endl;
		cout << "You lose better luck next time!" << endl;
		CWin++;
	}
	else if ((human == 'S' || human == 's') && (ai == 1))
	{
		cout << "The computer chose Paper." << endl;
		cout << "Victory!" << endl;
		Hwin++;
	}
	else if ((human == 'S' || human == 's') && (ai == 3))
	{
		cout << "The computer chose Rock." << endl;
		cout << "You lose better luck next time!" << endl;
		CWin++;
	}
	else if ((human == 'S' || human == 's') && (ai == 2))
	{
		cout << "The computer chose Scissors." << endl;
		cout << "The match is a draw!" << endl;
	}
	else
	{
		cout << "Invalid input, Game Over." << endl;
	}
	// Ask the user if they want to repeat the program
	cout << "Would you like to repeat? (Y/N) ";
	cin >> rep;
	if (rep == 'Y' || rep == 'y')
	{
		main();
		cout << "\nComputer won: " << CWin << endl;
		cout << "\nYou won: " << Hwin << endl;

	}
	else if(rep == 'N' || rep == 'n') {
		cout << "\nComputer won: " << CWin << endl;
		cout << "\nYou won: " << Hwin << endl;
		system("pause");
	}
}