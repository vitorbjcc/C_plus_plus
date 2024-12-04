// ###########################################
// PHILIP PROGRAMS - USE AT YOUR OWN RISK    #
// ###########################################
//
// Bool Test: It analises two values and tell user if they are equal or not

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int displayNameOfProgram()
{
    // Displays the name of the program
    cout << "#############" << endl;
    cout << "Bool Test" << endl;
    cout << "#############" << endl;

    return 0;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // Displays the name of the program
    displayNameOfProgram();

    // Asks user for the first value
    double dFirstValue;
    cout << endl << "Enter the first value: ";
    cin >> dFirstValue;

    // Clears screen
    system("cls");

    // Displays the name of the program
    displayNameOfProgram();

    // Asks user for the second value
    double dSecondValue;
    cout << endl << "Enter the second value: ";
    cin >> dSecondValue;

    // Clears screen
    system("cls");

    // Displays the name of the program
    displayNameOfProgram();

    // Check if first value are equal to the second and saves it at condition variable
    bool bCondition = dFirstValue == dSecondValue;

    // If they are equal
    if (bCondition)
    {
        // Displays message
        cout << endl << "The value ";
        cout << dFirstValue;
        cout << " and value ";
        cout << dSecondValue;
        cout << " are equal." << endl << endl;
    }
    // If they aren't equal
    else
    {
        // Displays message
        cout << endl << "The value ";
        cout << dFirstValue;
        cout << " and value ";
        cout << dSecondValue;
        cout << " aren't equal." << endl << endl;
    }

    // Wait until user's response to close the program
    cout << "Press enter to close the program...";
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
