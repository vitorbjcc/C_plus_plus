// #############################################
// PHILIP PROGRAMS - USE AT YOUR OWN RISK      #
// #############################################
//
// This is a simple calculator made in C++

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int displayProgramName()
{
    // Displays the name of the program
    cout << "######################" << endl;
    cout << "SIMPLE CALCULATOR    #" << endl;
    cout << "######################" << endl;

    return 0;
}

double calculate(double x, double y, char option)
{
    // Depending of option, return different calculations
    if (option == 'A') // Addition
    {
        return x + y;
    }
    else if (option == 'S') // Subtraction
    {
        return x - y;
    }
    else if (option == 'M') // Multiplication
    {
        return x * y;
    }
    else if (option == 'D') // Division
    {
        return x / y;
    }

    // If it is an invalid option, then return -1
    return -1;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // Displays the name of the program
    displayProgramName();

    // Displays options of calculations
    cout << endl << "Calculation options (make sure to write it at upper case):" << endl;
    cout << "\t- A = Addition" << endl;
    cout << "\t- S = Subtraction" << endl;
    cout << "\t- M = Multiplication" << endl;
    cout << "\t- D = Division" << endl;

    // Asks user to select an option
    char option;
    cout << endl << "Option of the calculation: ";
    cin >> option;

    // Check if it is not a valid option
    if (option != 'A' && option != 'S' && option != 'M' && option != 'D')
    {
        // Clears screen
        system("cls");

        // Displays the name of the program
        displayProgramName();

        // Warn user that he has wrote an invalid option
        cout << endl << "You have written an invalid option, press enter to exit the program...";
        cin.ignore(10, '\n');
        cin.get();

    }
    else // If user selected a valid option
    {
        // Clears screen
        system("cls");

        // Displays the name of the program
        displayProgramName();

        // Asks user for first value
        double firstV;
        cout << endl << "Enter first value: ";
        cin >> firstV;

        // Clears screen
        system("cls");

        // Displays the name of the program
        displayProgramName();

        // Asks user for second value
        double secondV;
        cout << endl << "Enter second value: ";
        cin >> secondV;

        // Clears screen
        system("cls");

        // Displays the name of the program
        displayProgramName();

        // Displays the result
        cout << endl << "The result the calculation is ";
        cout << calculate(firstV, secondV, option);
        cout << ".";

        // Wait user's response to close the program
        cout << endl << endl << "Press enter to exit the program...";

        // Clear buffer
        cin.ignore(10, '\n');

        // Read the \n character but ignore it and close the program
        cin.get();

    }

    return 0;
}
