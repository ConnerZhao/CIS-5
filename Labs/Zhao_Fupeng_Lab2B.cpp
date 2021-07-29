// Fupeng Zhao

//CIS-5 Online

// June 27th, 2021

// Lab 2B: Total Purchase
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double total{};
    // first item
    double item1Price;
    float tax = 1.07;
    string item1Name;
    cout << "Please enter the name of the first item: " << endl;
    getline(cin, item1Name);
    cout << "Please enter the name of price first item: " << endl;
    cin >> item1Price;
    total = item1Price;
    cout << item1Name << " COSTS $" << item1Price << endl << "your total now is: $" << total << endl; 

    // second item
    double item2Price;
    string item2Name;
    cout << "Please enter the name of the second item: " << endl;
    cin >> item2Name;
    cout << "Please enter the name of price second item: " << endl;
    cin >> item2Price;
    total = total + item2Price;
    cout << item2Name << " COSTS $" << item2Price << endl << "your total now is: $" << total << endl;

    // third item
    double item3Price;
    string item3Name;
    cout << "Please enter the name of the third item: " << endl;
    cin >> item3Name;
    cout << "Please enter the name of price third item: " << endl;
    cin >> item3Price;
    total = total + item3Price;
    cout << item3Name << " COSTS $" << item3Price << endl << "your total now is: $" << total << endl;

    // fourth item
    double item4Price;
    string item4Name;
    cout << "Please enter the name of the fourth item: " << endl;
    cin >> item4Name;
    cout << "Please enter the name of price fourth item: " << endl;
    cin >> item4Price;
    total = total + item4Price;
    cout << item4Name << " COSTS $" << item4Price << endl << "your total now is: $" << total << endl;

    // fifth item
    double item5Price;
    string item5Name;
    cout << "Please enter the name of the fifth item: " << endl;
    cin >> item5Name;
    cout << "Please enter the name of price fifth item: " << endl;
    cin >> item5Price;
    total = total + item5Price;
    cout << item5Name << " COSTS $" << item5Price << endl << "your total now is: $" << total << endl;
    
    // final calculation
    total *= tax;
    cout << "Your final price with tax is: " << total << endl;
}