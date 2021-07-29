#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

char getDecision();
char repeat();
char getGuess();
char flipCoin();
void winOrLose(char g, char c, float& b);
void game();
float bank = 15.00;

int main() {

    // display the 3 lines of messages to user (or create another function for these cout statements)
    cout << "Welcome to the Coin Flip Game!\n";
    cout << "Your bank account starts at $15\n\n";
    cout << "It costs $1 to play\nIf you win, you'll earn $1\nIf you lose you'll lose $1\n";
    getDecision();
}

void game() {
    char coin, coinGuess;
    coin = flipCoin();
    coinGuess = getGuess();
    winOrLose(coin, coinGuess, bank);
}

char repeat() {
    char repeat;
    cout << "\nWould you like to play again? ";
    cin >> repeat;
    return repeat;
}

char getDecision() {
    char decision;
    cout << "\nWould you like to play? ";
    cin >> decision;
    if (decision == 'Y' || decision == 'y') {
        game();
    }
    else
        cout << "Have a great day\n";
    return 0;
}

char getGuess() {
    char guess;
    cout << "Guess Heads or Tails?(h/t) ";
    cin >> guess;
    return guess;
}

void winOrLose(char g, char c, float& b) {
    char rep;
    if (g == c) {
        b += 1;
        cout << "\nYou win!\n" << "You now have: $" << b << endl;
        rep = repeat();
        if (rep == 'Y' || rep == 'y') {
            game();
        }
        else if (rep == 'N' || rep == 'n') {
            system("pause");
            return;
        }
    }
    else if (g != c) {
        b -= 1;
        cout << "\nYou guess is incorrect!\n" << "You now have: $" << b << endl;
        rep = repeat();
        if (rep == 'Y' || rep == 'y') {
            game();
        }
        else if (rep == 'N' || rep == 'n') {
            system("pause");
            return;
        }
    }
}

char flipCoin() {
    int flip;
    flip = rand() % 2 + 1;// assign random numbers
    if (flip == 1)
        return 'h';
    else
        return 't';
}
