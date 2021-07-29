#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_DIVS = 4;
    const int NUM_QTRS = 5;
    double sales[NUM_DIVS][NUM_QTRS];
    double totalSales = 0;
    int div, qtr;
    double div_sales = 0;

    cout << "This program will calculate the total sales of a company's division \n";
    cout << "Enter the following sales information: \n\n";

    for (div = 1; div < NUM_DIVS; div++)
    {
        for (qtr = 1; qtr < NUM_QTRS; qtr++)
        {
            cout << "Division " << (div);
            cout << ", Quarter " << (qtr) << ": $";
            cin >> sales[div][qtr];
            totalSales += sales[div][qtr];
        }
        div_sales += sales[div][qtr];
    }
    for (div = 1; div < NUM_DIVS; div++)
    {
        div_sales += sales[div][qtr];
    }

    cout << setw(10);
    cout << "The total sales for the company are: $";
    cout << totalSales << endl;
    cout << div_sales << endl;
    return 0;
}