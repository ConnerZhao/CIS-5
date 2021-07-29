// CIS - 5
// 
// Online
// 
// July 29th
// 
// Conner Zhao
// 
// TTT - Final

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Global Variables
const int SIZE = 3;
char board[SIZE][SIZE];

// Player Struct
struct player {
	string name;
	int W = 0, L = 0, T = 0;
};

// Init Player
player p1;
player p2;
player s;
player c;

// Default Functions
void setTable();
void display();
void repeat();
void getPlayerInfo();

// Core functions
void playerMove(char num, char player);
bool checkDraw(bool gameOver);
bool checkWinner(char player, bool gameOver);

// Single player
char AI();

// Core functions for single player
bool checkDraw1(bool gameOver);
bool checkWinner1(char player, bool gameOver);

// Main Function
int main() {
	// Variable
	bool done = false, gameOver = false;
	char player = 'O', num, choice;
	getPlayerInfo();

	cout << "Welcome to the Tic Tac Toe game!" << endl << endl
		<< "Please make an option." << "\nA. Play game" << "\nB. Show stats" << "\nC. Singleplayer" << "\nD. Quit" << endl; // Asks the user to make a selection
	cin >> choice;

	switch (choice) { // Switch function for choices
	case 'A': // Main 
		cout << "X goes first\n\n";
		setTable();
		do{
			if (player == 'X') { player = 'O'; }
			else { player = 'X'; }
			
			display(); // Call to display
			cout << "Enter a number to choose a position enter on the board: ";
			cin >> num; // Inputs a number
			cout << endl;

			playerMove(num, player);
			checkWinner(player, gameOver);
			checkDraw(gameOver);
		} while (!done);

		cout << "Game over";
		repeat(); // Repeat funciton
		break;

	case 'B': // Stats
		cout << "\nPlayer 1: " << p1.name << endl;
		cout << "Wins: " << p1.W << endl;
		cout << "Loss: " << p1.L << endl;
		cout << "Ties: " << p1.T << endl;

		cout << "\nPlayer 2: " << p2.name << endl;
		cout << "Wins: " << p2.W << endl;
		cout << "Loss: " << p2.L << endl;
		cout << "Ties: " << p2.T << endl;

		cout << "---------------" << " Single Player only " << "---------------" << endl;
		cout << "\nPlayer: " << s.name << endl;
		cout << "Wins: " << s.W << endl;
		cout << "Loss: " << s.L << endl;
		cout << "Ties: " << s.T << endl;

		cout << "\nComputer" << endl;
		cout << "Wins: " << c.W << endl;
		cout << "Loss: " << c.L << endl;
		cout << "Ties: " << c.T << endl;

		repeat(); // Repeat funciton
		break;
	case 'C':
		
		cout << "Player 1, Please enter your name: "; // Player 1
		cin >> s.name;
		cout << s.name << ", You are X\n" << "Computer is O\n";

		cout << "X goes first\n\n";
		setTable();
		do {
			if (player == 'X') { player = 'O'; }
			else { player = 'X'; }
			// Human
			display();
			cout << "Enter a number to choose a position enter on the board: ";
			cin >> num; // Inputs a number
			cout << endl;

			playerMove(num, player);
			checkWinner1(player, gameOver);
			checkDraw1(gameOver);

			// Computer
			num = AI(); // Call to computer 
			cout << "The computer chose: " << num << endl;;

			playerMove(num, player);
			checkWinner1(player, gameOver);
			checkDraw1(gameOver);

		} while (!done);

		cout << "Game over";
		repeat(); // Repeat funciton
		break;
	case 'D': // Quit
		system("pause");
		return 0;
		break;
	}

	system("pause");
	return 0;
}


// Default functions
void setTable() {
	int n = 1; 
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			board[x][y] = '0' + n; // Clears/Resets the table
			n++;
		}
	}
}
void display() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++)
			if (y < 2) { cout << board[x][y] << " | "; }
			else { cout << board[x][y] << endl; } // Outputs the table
		if (x < 2) { cout << "---------\n"; }
	}
}
void repeat() { // Repeat function
	char choice;

	cout << "\nWould you like to go again? <y/n>"; // If the user says Y or y, repeat function will run main() again.
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		main();
	}
	else {
		exit(EXIT_SUCCESS);
		system("break");
		return;
	}
}
void getPlayerInfo() {
	cout << "Player 1, Please enter your name: "; // Player 1
	cin >> p1.name;
	cout << p1.name << ", You are X\n";

	cout << "Player 2, Please enter your name: "; // Player 2
	cin >> p1.name;
	cin >> p2.name;
	cout << p2.name << ", You are O\n";
}


// Core functions
void playerMove(char num, char player) {
	bool wrongMove = true; // Wrong move
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++)
		{
			if (board[x][y] == num) {
				board[x][y] = player; wrongMove = false;
			}
		}
	}
	if (wrongMove == true) { cout << "Wrong move!\n"; }
}
bool checkWinner(char player, bool gameOver)
{
	for (int x = 0; x < 3; x++)
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2]) gameOver = true;
	for (int x = 0; x < 3; x++)
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x]) gameOver = true;
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) gameOver = true;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) gameOver = true; // Checks if one side won
	if (gameOver == true)
	{
		if (player == 'X') { 
			cout << "************ " << p1.name << " wins!" << " ************" << endl << endl; 
			p1.W += 1;
			display();
			repeat();
		}
		if (player == 'O') { 
			cout << "************ " << p1.name << " wins!" << " ************" << endl << endl; 
			p2.W += 1;
			display();
			repeat();
		}
	}
	return gameOver;
}
bool checkDraw(bool gameOver)
{
	int n = 1, count = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (board[x][y] == '0' + n) { count++; } // Checks for tie
			n++;
		}
	}
	if (count < 1) {
		cout << "************" << " It's a tie!" << "************" << endl << endl;
		gameOver = true;
		p2.T += 1;
		p1.T += 1;
		repeat();
	}
	return gameOver;
}
	

// Core function for single player
char AI() {
	char arrayNum[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int RandIndex = rand() % 9; //generates a random number between 0 and 3
	return arrayNum[RandIndex];
}
bool checkWinner1(char player, bool gameOver)
{
	for (int x = 0; x < 3; x++)
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2]) gameOver = true;
	for (int x = 0; x < 3; x++)
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x]) gameOver = true;
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) gameOver = true;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) gameOver = true;
	if (gameOver == true)
	{
		if (player == 'X') {
			cout << "************ " <<" Player wins!" << " ************" << endl << endl;
			s.W += 1;
			display();
			repeat();
		}
		if (player == 'O') {
			cout << "************ " <<" Computer wins!" << " ************" << endl << endl;
			c.W += 1;
			display();
			repeat();
		}
	}
	return gameOver;
} 
bool checkDraw1(bool gameOver)
{
	int n = 1, count = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (board[x][y] == '0' + n) { count++; }
			n++;
		}
	}
	if (count < 1) {
		cout << "************" << " It's a tie!" << "************" << endl << endl;
		gameOver = true;
		s.T += 1;
		c.T += 1;
		repeat();
	}
	return gameOver;
}