// Fupeng Zhao

//CIS-5 Online

// June 27th, 2021

// Lab 2A: Full Name - The program accepts the user's name from the keyboard and displays a message to the user.

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string firstName; //Initialize the variable
  string lastName;
  cout << "Please, enter your first name: ";
  getline(cin,firstName);
  cout << "Please, enter your first name: ";
  getline(cin,lastName);
  cout << "Welcome to C++ programming, " << firstName << " " << lastName << " I applaud your choice to learn to code and increase your technical skills." << endl;

  return 0;
}