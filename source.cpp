// tictactoe.cpp

#include <iostream>

#include <iomanip>

#include <time.h>   

using namespace std;

//game class

class Game

{

private:

       //Declare the game board two dimensional char

       //array with 3 rows and 3 columns

       char board[3][3];

public:

       //Constructor that intializes the each element of the

       //game board array with an asterisk (*)

       Game()

       {

              for (int i = 0; i < 3; i++)

              {

                     for (int j = 0; j < 3; j++)

                     {

                           board[i][j] = '*';

                     }

              }

       }

       //intializes the each element of the

       //game board array with an asterisk (*)

       void resetBoard()

       {

              for (int i = 0; i < 3; i++)

              {

                     for (int j = 0; j < 3; j++)

                     {

                           board[i][j] = '*';

                     }

              }

       }

       void displayBoard()

       {

              for (int i = 0; i < 3; i++)

              {

                     for (int j = 0; j < 3; j++)

                     {

                           cout << setw(5) << board[i][j];

                     }

                     cout << endl;

              }

       }

       void replace(int x, int y,char player)

       {

              board[x][y] = player;

       }

       bool validLocation(int x, int y)

       {

              if (board[x][y] == '*')

                     return 1;

              else

                     return 0;

       }

       //Returns true(1), if player 1 won the game

       //Returns false(0), otherwise

       bool checkPlayer1Win()

       {

              if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') return 1;

              if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') return 1;

              if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') return 1;

              if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') return 1;

              if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') return 1;

              if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') return 1;

              if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') return 1;

              if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') return 1;

              return 0;

       }

       //Returns true(1), if player 2 won the game

       //Returns false(0), otherwise

       bool checkPlayer2Win()

       {

              if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') return 1;

              if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') return 1;

              if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') return 1;

              if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') return 1;

              if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') return 1;

              if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') return 1;

              if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') return 1;

              if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') return 1;

              return 0;

       }

       //Returns true(1), if all of the locations on the

       //board are full. Returns false(0) , otherwise.

       bool boardFull()

       {

              for(int i=0;i<3;i++)

                     for (int j = 0; j < 3; j++)

                     {

                           if (board[i][j] == '*')

                                  return 0;

                     }

              return 1;

       }

       //Returns true(1), if all of the locations on the

       //board are full, but there is no winner

       bool isTie()

       {

              if (!checkPlayer1Win() && !checkPlayer2Win() && boardFull())

                     return 1;

              else

                     return 0;

       }

};

int main()

{

srand (time(NULL));

       Game tictactoe;

      

       int player = 0;

       int r, c;

       char nextGame = 'n';

       while (1)

       {

              //Display the initial board

              tictactoe.resetBoard();          

              cout << "\nWelcome to Tic-Tac-Toe game" << endl;

              tictactoe.displayBoard();

              //Allow the players to select a location on the board

              //until a player won the game or tie.

              while (1)

              {

                     //Start with Human Player

                     cout << "Human Player:" << endl;

                     cout << "\nSelect a location (x,y) on Bard" << endl;

                     cout << "Enter row(1-3): ";

                     cin >> r;

                     cout << "Enter column(1-3): ";

                     cin >> c;

                     //Prompt for row and column number

                     //until the user enters a valid location

                     while (!tictactoe.validLocation(r-1, c-1) || (r < 1 || r>3) || (c < 1 || c>3))

                     {

                           cout << "Enter valid row and column numbers or proper location " << endl;

                           cout << "Human Player:" << endl;

                           cout << "\nSelect a location (x,y) on Bard" << endl;

                           cout << "Enter row: ";

                           cin >> r;

                           cout << "Enter column: ";

                           cin >> c;

                     }

                     //Replace the * in the chosen location

                     //with the corresponding character

                     tictactoe.replace(r - 1, c - 1, 'X');

                     //Then display the updated baord

                     tictactoe.displayBoard();

                     //Check for player1 win

                     if (tictactoe.checkPlayer1Win() == 1)

                     {

                           cout << "Player1 won the game!" << endl;

                           break;

                     }

                     //Check for tie

                     if (tictactoe.isTie())

                     {

                           cout << "Game is tie!" << endl;

                           break;

                     }

                     //Computer's turn

                     cout << "Computer:" << endl;                   

                     r = rand() % 3 + 1;

                     c= rand() % 3 + 1;

                     //Prompt for row and column number

                     //until the user enters a valid location

                     while (!tictactoe.validLocation(r - 1, c - 1) || (r < 1 || r>3) || (c < 1 || c>3))

                     {                         

                           r = rand() % 3 + 1;

                           c = rand() % 3 + 1;

                     }

                     cout << "Computer selects " <<"("<< r << "," << c <<")"<< endl;

                     //Replace the * in the chosen location

                     //with the corresponding character

                     tictactoe.replace(r - 1, c - 1, 'O');

                     //Then display the updated baord

                     tictactoe.displayBoard();

                     //Check for computer win

                     if (tictactoe.checkPlayer2Win() == 1)

                     {

                           cout << "Computer won the game!" << endl;

                           break;

                     }

                     //Check for tie

                     if (tictactoe.isTie())

                     {

                           cout << "Game is tie!" << endl;

                           break;

                     }

              }

              //Ask the users if they want to play again

              //or if they want to exit the program

              cout << "\nDo you want to play again(y|n):";

              cin >> nextGame;

              //If user want to exit, break the loop

              if (nextGame == 'n' | nextGame == 'N')

                     break;

       }

       cout << "Thank you..." << endl;

       return 0;

}