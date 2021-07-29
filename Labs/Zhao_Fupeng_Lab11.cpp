// Lab 11: Soccer Scores BEGIN FILE

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constant for the number of players
const int NUM_PLAYERS = 12;

// Declaration of the Player structure
struct Player
{
    string name;		 // Player's name
    int number;       // Player's number
    int points;       // Points scored by the player
};

// Function prototypes
void getPlayerInfo(Player&);
void showInfo(Player);
int  getTotalPoints(Player[], int);
void showHighest(Player[], int);

//***********************************************
// Function main                                *
//***********************************************

int main()
{
    // Array of Player structures
    Player team[NUM_PLAYERS];

    // Loop counter
    int index;

    // Get each player's info.
    for (index = 0; index < 12; index++)
    {
        cout << "\nPLAYER #" << (index + 1) << "\n";
        cout << "---------\n";
        getPlayerInfo(team[index]);
        cin.get();
    }

    // Display the table headings.
    cout << setw(20) << left << "\nNAME";
    cout << setw(10) << "NUMBER";
    cout << setw(10) << "POINTS SCORED\n";

    // Display the team info.
    for (index = 0; index < 12; index++)
        showInfo(team[index]);

    // Display total points
    cout << "TOTAL POINTS: "
        << getTotalPoints(team, NUM_PLAYERS)
        << endl;

    // Display the player scoring the most points.
    showHighest(team, NUM_PLAYERS);

    system("pause");
    return 0;
}

//***********************************************
// Function getPlayer                           *
// This function accepts a reference to a Player*
// structure variable. The user is asked to     *
// enter the player's name, number, and the     *
// number of points scored. This data is stored *
// in the reference parameter.                  *
//***********************************************

void getPlayerInfo(Player& p)
{
    cout << "Please enter your name " << endl;
    cin >> p.name;
    cout << "Please enter your team nubmer " << endl;
    cin >> p.number;
    cout << "Please enter the amount of points scored " << endl;
    cin >> p.points;

}

//***********************************************
// Function showInfo                            *
// This function displays the data in the Player*
// structure variable passed into the parameter.*
//***********************************************

void showInfo(Player p)
{
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << endl << p.name << " team " << p.number << " scored " << p.points << endl;
    }
}

//***********************************************
// Function getTotalPoints                      *
// This function accepts an array of Player     *
// structure variables as its argument. The     *
// function calculates and returns the total   *
// of all the players points in the array.      *
//***********************************************

int getTotalPoints(Player p[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += p[i].points;
    }
    return total;
}

//***********************************************
// Function showHighest                         *
// This function accepts an array of Player     *
// structure variables. It displays the name    *
// of the player who scored the most points.    *
//***********************************************

void showHighest(Player p[], int size)
{
    int highScore = 0;
    for (int i = 0; i < size; i++) {
        if (p[i].points > highScore) {
            highScore = p[i].points;
        }
    }
    cout << "The Highest score is " << highScore << endl;
}