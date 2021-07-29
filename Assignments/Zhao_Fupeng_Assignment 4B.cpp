// Fupeng Zhao

// CIS-5 Online

// July 5th, 2021

// Restaurant Menu

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    // Menu
    const string name = "Out and In", m0 = "Please select 1 - Cheese Burger ", m1 = "Please select 2 - Double Cheese Burger ", m2 = "Please select 3 - French Fries ", m3 = "Please select 4 - Drinks ", a0 = "Bacon strips ", a1 = "Cheese ", a2 = "Lettuce ";
    // Price
    const double addons = 0.99, cheese = 4.99, mc1 = 5.99, mc2 = 2.99, mc3 = 1.49;
    char choice1, addChoice;
    string selAddons;
    double total = 0;

    cout << "Welcome to Out and in, take a look at our menu!\n" << m0 << cheese << endl << m1 << mc1 << endl << m2 << mc2 << endl << m3 << mc3 << endl << "Please make a selection for your first choice (A, B, C or D): ";
    cin >> choice1;

    switch (choice1) {
        // cheese burger
    case 'A':
        total += cheese;
        cout << "You've chosen the Cheese Burger!\n" << "Would you like to get extra addon?s on that? (Y or N)";
        cin >> addChoice;
        switch (addChoice)
        {
        // switch for addons
        case 'Y':
            cout << "What addons would you like? (Bacons, Extra Cheese, Lettuce) ";
            cin >> selAddons;
            if (selAddons == "Bacon") {
                total += (addons);
            }
            else if (selAddons == "Extra Cheese") {
                total += (addons);
            }
            else {
                total += (addons);
            }
            cout << "Your total is $" << total << endl;
            break;
        default:
            cout << "Your total is $" << total << endl;
            break;
        }
        // Break for case A
        break;
    
        // Double burger
    case 'B':
        total += mc1;
        cout << "You've chosen the Double Cheese Burger!\n" << "Would you like to get extra addon?s on that? (Y or N)";
        cin >> addChoice;
        switch (addChoice)
        {
            // switch for addons
        case 'Y':
            cout << "What addons would you like? (Bacons, Extra Cheese, Lettuce) ";
            cin >> selAddons;
            if (selAddons == "Bacon") {
                total += (addons);
            }
            else if (selAddons == "Extra Cheese") {
                total += (addons);
            }
            else {
                total += (addons);
            }
            cout << "Your total is $" << total << endl;
            break;
        default:
            cout << "Your total is $" << total << endl;
            break;
        }
        // Break for case B
        break;

        // Drench Fries
    case 'C':
        total += mc2;
        cout << "You've chosen the French Fries!\n\n" << "Would you like to get extra addon?s on that? (Y or N)";
        cin >> addChoice;
        switch (addChoice)
        {
            // switch for addons
        case 'Y':
            cout << "What addons would you like? (Bacons, Extra Cheese, Lettuce) ";
            cin >> selAddons;
            if (selAddons == "Bacon") {
                total += (addons);
            }
            else if (selAddons == "Extra Cheese") {
                total += (addons);
            }
            else {
                total += (addons);
            }
            cout << "Your total is $" << total << endl;
            break;
        default:
            cout << "Your total is $" << total << endl;
            break;
        }
        // Break for case C
        break;

        // drinks
    case 'D':
        total += mc3;
        cout << "You've chosen Drinks!\n";
        // Break for case D
        cout << "Your total is $" << total << endl;
        break;
    default:
        cout << "Please make a selection" << endl;
    }
}