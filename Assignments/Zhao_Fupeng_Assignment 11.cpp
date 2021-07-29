#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int NUM_STUDENTS = 2, NUM_TESTS = 5; // global var

// Struct init
struct struct1 {
	string name[NUM_STUDENTS], id[NUM_STUDENTS];
	float totalAvg, stuAvg[NUM_STUDENTS][NUM_TESTS], score[NUM_STUDENTS][NUM_TESTS];
	char grade[NUM_STUDENTS];
};
struct1 info;

// Function proto
void getInfo(), assignGrade(), displayResults();

/* struct1
	std::string name;
	int id, score[5];
	float avg;
	char grade;
*/

// Main fun
int main() {
	getInfo();
	displayResults();
}

void getInfo() {
	float total = 0;
	cout << "Hello, thank you for using this program." << endl << endl;

	for (int i = 0; i < NUM_STUDENTS; i++){
		cout << "Hello please enter your name: ";
		cin >> info.name[i];
		cout << "Hello " << info.name[i] << " please enter your student ID: ";
		cin >> info.id[i];

		for (int j = 0; j < NUM_TESTS; j++) {
			cout << "Please enter your score for quiz " << j << ": ";
			cin >> info.score[i][j];
			total += info.score[i][j];
			info.stuAvg[i][j] = total;
		}
	}
}

void assignGrade() {
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		for (int j = 0; j < NUM_TESTS; j++) {
			// assign a letter grade
			if (info.stuAvg[counter][j] >= 90)
				info.grade[counter] = 'A';

			else if (info.stuAvg[counter][j] >= 80)
				info.grade[counter] = 'B';

			else if (info.stuAvg[counter][j] >= 70)
				info.grade[counter] = 'C';

			else if (info.stuAvg[counter][j] >= 60)
				info.grade[counter] = 'D';

			else
				info.grade[counter] = 'F';
		}
	}
}

void displayResults() {
	float classAvg, studentAvg;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		cout << "\nHello, " << info.name[i] << " ID: " << info.id[i] << endl;
		cout << "Your test scores are: \n";
		for (int j = 0; j < NUM_TESTS; j++) {
			cout << "Test " << j << ": " << info.score[i][j] << endl; // Prints each score for student
			studentAvg = (info.stuAvg[i][j] / 5);
		}

		assignGrade(); // Assign the student a grade.

		cout <<"Your average score is " << studentAvg << endl << "Your grade in this class is "
			<< info.grade[i] << endl;
	}
	classAvg = info.totalAvg / NUM_STUDENTS;
	cout << endl << endl << "Class average: %" << classAvg;
}

/*
Check 
	Drop the high score and the low score. Average the remaining scores
	Assign a letter grade based on the average score -- X
	Calculate the class average based on each student's 3 middle scores (the average of the student averages).
	Display in a table format each students' name, five test scores, average, and letter grade
	Display the class average
*/