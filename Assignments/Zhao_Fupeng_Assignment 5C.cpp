// Fupeng Zhao

// CIS-5 Online

// July 7th, 2021

// Multiplication Table
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int num1, num2;
    cout << "     " << 1;//5 space chars

    for (num1 = 2; num1 <= 10; ++num1)
        cout << "    " << num1;//4 space chars

    cout << endl;
    cout << "   ----|";

    for (num1 = 2; num1 <= 10; ++num1)
        cout << "----|";

    cout << endl;

    for (num1 = 1; num1 <= 10; ++num1)
    {
        cout << setw(2) << num1 << "|";

        for (num2 = 1; num2 <= 10; ++num2)
            cout << setw(4) << num2 * num1 << "|";

        cout << endl;
        cout << " -|----";

        for (num2 = 2; num2 <= 9; ++num2)
            cout << "|----";

        cout << "|----|";
        cout << endl;

    }
    return 0;
}