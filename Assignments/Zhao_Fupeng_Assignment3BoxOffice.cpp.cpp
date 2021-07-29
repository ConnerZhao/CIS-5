// Fupeng Zhao

// CIS-5 Online

// July 3rd, 2021

// Box Office

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // init variables
    int  adultTic, childTic;
    float theaProfit = .2, grosBox, netBox, paidDis;

    // Ask adult tickets
    cout << "How much adult tickets are purchased? : " << endl;
    cin >> adultTic;
    cout << "How much children tickets are purchased? : " << endl;
    cin >> childTic;

    // Calculations
    grosBox = (static_cast<double>(adultTic) * 10) + (static_cast<double>(childTic) * 6);
    netBox = (static_cast<double>(adultTic) * 10) + (static_cast<double>(childTic) * 6) * theaProfit;
    paidDis = grosBox - netBox;

    // Outputs
    cout << "Movie Name: " << setw(3) << "Lord of the Ringlets" << endl;
    cout << "Adult Tickets Sold: " << setw(10) << adultTic << endl;
    cout << "Child Tickets Sold: " << setw(10) << childTic << endl;
    cout << "Gross Box Office Profit: " << setw(10) << grosBox << endl;
    cout << "Net Box Office Profit: " << setw(10) << netBox << endl;
    cout << "Amount Paid to Distributor: " << setw(10) << paidDis << endl;
}