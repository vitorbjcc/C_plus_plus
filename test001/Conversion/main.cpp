// ############################################
// # PHILIP PROGRAMS - USE AT YOUR OWN RISK   #
// ############################################
//
// Conversion - Program that converts Celsius temperature to Fahrenheit temperature
//
// Fahrenheit = Celsius * (212 - 32) / 100 + 32

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // Insert the temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Create a variable with the conversion of Celsius temperature to Fahrenheit temperature
    int fahrenheit;
    fahrenheit = celsius * (212 - 32) / 100 + 32;

    // Displays the result (followed by a NewLine)
    cout << endl << "Fahrenheit value is: ";
    cout << fahrenheit << endl;

    // Wait until user be ready for close the program
    // To allow user see the results
    cout << endl << "Press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
