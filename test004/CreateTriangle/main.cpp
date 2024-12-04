// #############################################
// PHILIP PROGRAMS - USE AT YOUR OWN RISK
// #############################################
//
// Triangle maker

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // Repeat variable for the code knows if user's want to create another triangle
    bool bRepeat = false;

    do
    {
        // Clears screen
        system("cls");

        // Asks user for the size of triangle
        int nTriangleSize;
        cout << "Size of the triangle: ";
        cin >> nTriangleSize;

        // Repeat this action X times (depends of user's answers)
        for (int i = 0; i < nTriangleSize+1; i++)
        {
            // Creates empty string
            string szText = "";

            // For each number of i
            for (int x = 0; x < i; x++)
            {
                // Saves a "*" character at szText
                szText += "*";
            }

            // After the text of our column ready, show it
            cout << szText << endl;
        }

        // Asks user if he wants to repeat
        string szRepeat;
        cout << endl << "Do you want to make another triangle?[Y/N]: ";
        cin >> szRepeat;

        // If user's wants
        if (szRepeat == "Y" || szRepeat == "y")
        {
            // Makes the program repeat
            bRepeat = true;
        }
        else
        {
            // Makes the program don't repeat
            bRepeat = false;
        }
    }
    while (bRepeat);

    return 0;
}
