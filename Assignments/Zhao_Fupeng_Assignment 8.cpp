#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Init Functions
void login();
bool checkCredentials(string username, string password);

int main() {
	// Init var
	int i = 0;
	string usr, pw;
	char dec;
	bool verf;

	// Request input from user
	cout << "Welcome User!\nWould you like to create a new login? (y/n) ";
	cin >> dec;

	if (dec == 'Y' || dec == 'y') {	// Regis
		login();
	}
	else if (dec == 'N' || dec == 'n') { // Login
		while (i < 3) {

			cout << "\nPlease enter your username: ";
			cin >> usr;
			cout << "\nPlease enter your password: ";
			cin >> pw;

			verf = checkCredentials(usr, pw);
				if (verf == true) {
					cout << "\nWelcome user!";
					break;
				}
				else if (verf == false) {
					cout << "The username/password you inputted is INVALID.\n";
				}
				i++;
				cout << "\nAttemp number " << i << endl;
		}
		
	}
	system("pause");
	return 0;
}

void login() { // Account reg
	string usr, pw;
	ofstream loginInfo;
	loginInfo.open("test.txt");

	cout << "\nPlease enter your username: ";
	cin >> usr;
	cout << "\nPlease enter your password: ";
	cin >> pw;

	loginInfo << usr << endl;
	loginInfo << pw << endl;

	loginInfo.close();
	cout << "\nAccount created.";
	main();
}

bool checkCredentials(string username, string password) { // Verification
	string usr, pw;
	ifstream loginInfoRead;
	loginInfoRead.open("test.txt");

	loginInfoRead >> usr;
	loginInfoRead >> pw;

	if (username != usr) {
		return false;
	}
	else if (password != pw) {
		return false;
	}
	else
		return true;
	
}