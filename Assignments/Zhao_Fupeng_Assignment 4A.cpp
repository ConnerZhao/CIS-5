// Fupeng Zhao

// CIS-5 Online

// July 5th, 2021

// Text Adventure Game

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string choice;
    cout << "You just woke up on a island with people all around you having power.\nA Man walked up to you and offred you two pills, one is the power of fire, and the other one is the power of water. \nWhich one would you choose? (Fire/Water): ";
    getline(cin, choice);
    if (choice == "Fire") {
        cout << "You have chosen fire as your power, you now need to fight one out of two bosses in order for you to survive.\nYou can either chose to fight the water boss or the tree boss, which one would you like to choose? (Water/Wood): ";
        getline(cin, choice);
            if (choice == "Water") {
                cout << "You have been defeated.\nWater beats fire.";
                exit(0);
            }
            else if (choice == "Wood"){
                cout << "Great choice, you have passed.\nYou may live your life happily ever after!";
                
            }
    }
    else if (choice == "Water") {
        cout << "You have chosen Water as your power, you now need to fight one out of two bosses in order for you to survive.\nYou can either chose to fight the Fire boss or the Ice boss, which one would you like to choose? (Fire/Ice): ";
        getline(cin, choice);
        }if (choice == "Ice") {
            cout << "You have been defeated.\nIce beats water.";
            exit(0);
        }
        else if (choice == "Fire") {
            cout << "Great choice, you have passed.\nYou may live your life happily ever after!";
        }
}