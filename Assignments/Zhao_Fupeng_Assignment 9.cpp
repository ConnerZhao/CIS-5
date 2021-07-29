#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int findLow(int test[], int size);
int findHi(int test[], int size);
double calcAvg(int test[], int size);
void assignGrade(int test[], char grade[], int size);
void getInput(string name[], int test[], int size);
void displayResults(string name[], int test[], char grade[], int size, double average, int lowIndex, int highIndex);


int main()
{
    const int NUM_STUDENTS = 4;

    string name[NUM_STUDENTS];
    int test[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    float avg;
    int total = 0,
        hiIndex = 0,
        lowIndex = 0;
    //Call functions
    getInput(name, test, NUM_STUDENTS);
    assignGrade(test, grade, NUM_STUDENTS);
    avg = calcAvg(test, NUM_STUDENTS);
    hiIndex = findHi(test, NUM_STUDENTS);
    lowIndex = findLow(test, NUM_STUDENTS);
    displayResults(name, test, grade, NUM_STUDENTS, avg, lowIndex, hiIndex);

    system("pause");
    return 0;
}

int findLow(int test[], int size)
{
    int lowIndex = 0;
    for (int counter = 0; counter < size; counter++)
    {
        // find the index of the student with the highest score
        if (test[lowIndex] > test[counter])
            lowIndex = counter; // Save the index of the high student
    }
    return lowIndex;
}

int findHi(int test[], int size)
{
    int hiIndex = 0;
    for (int counter = 0; counter < size; counter++)
    {
        // find the index of the student with the highest score
        if (test[hiIndex] < test[counter])
            hiIndex = counter; // Save the index of the high student
    }
    return hiIndex;
}
double calcAvg(int test[], int size)
{
    float avg;
    int total = 0;
    for (int counter = 0; counter < size; counter++)
    {
        // accumlate all the scores
        total += test[counter];

    }
    // calculate class average
    avg = static_cast<float>(total) / size;

    return avg;
}

void assignGrade(int test[], char grade[], int size)
{

    for (int counter = 0; counter < size; counter++)
    {
        // assign a letter grade
        if (test[counter] >= 90)
            grade[counter] = 'A';
        else if (test[counter] >= 80)
            grade[counter] = 'B';
        else if (test[counter] >= 70)
            grade[counter] = 'C';
        else if (test[counter] >= 60)
            grade[counter] = 'D';
        else
            grade[counter] = 'F';
    }
}
void getInput(string name[], int test[], int size)
{
    for (int counter = 0; counter < size; counter++)
    {
        // get student name
        cout << "Please input the students name \n";
        getline(cin, name[counter]);

        // student score
        cout << "Please input score for test \n";
        cin >> test[counter];

        cin.ignore();
    }
}

void displayResults(string name[], int test[], char grade[], int size, double average, int lowIndex, int highIndex)
{
    // display results
    for (int counter = 0; counter < size; counter++)
    {
        cout << name[counter] << ", your test score = " << test[counter] << ", your grade = " << grade[counter] << endl;
    }

    cout << "\n\nThe class average for this test = " << average << endl << endl;

    cout << name[highIndex] << " has the highest test score = " << test[highIndex] << endl;


    cout << name[lowIndex] << " has the lowest test score = " << test[lowIndex] << endl;

}

