// #############################################
// PHILIP PROGRAMS - USE AT YOUR OWN RISK      #
// #############################################
//
// Guess game

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int displayProgramName()
{
    cout << "############################" << endl;
    cout << "GUESS GAME - 1 TO 10       #" << endl;
    cout << "############################" << endl;

    return 0;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    // Displays the name of the program
    displayProgramName();

    // Defines seed based in actual time
    srand(time(0));

    // Generates random number between 1 and 10
    int nRandomNumber = rand() % 10 + 1;

    // Declare guess number variable
    int nGuessNumber;
    nGuessNumber = 0;

    // While user don't guess correctly the number, execute this block of code
    do
    {
        // Extract a guess from the user
        cout << endl << "Your guess: ";
        cin >> nGuessNumber;

        // If the guess was too short
        if (nGuessNumber < nRandomNumber)
        {
            // Displays a tip for the user
            cout << endl << endl << "It\'s a higher number than ";
            cout << nGuessNumber;
            cout << "." << endl << endl;
        }
        // If the guess was too high
        if (nGuessNumber > nRandomNumber)
        {
            // Displays a tip for the user
            cout << endl << endl << "It\'s a smaller number than ";
            cout << nGuessNumber;
            cout << "." << endl << endl;
        }
    }
    while (nGuessNumber != nRandomNumber);

    // If user's guess is right
    // Clears the screen
    system("cls");

    // Displays the name of the program
    displayProgramName();

    // Displays a message
    cout << endl << "Congratulations, you won! The correct number was ";
    cout << nRandomNumber;
    cout << ".";

    // Wait for user's response to close the program
    cout << endl << endl << "Press enter to close the program...";
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
