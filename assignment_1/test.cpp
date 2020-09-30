#include <iostream>
using namespace std;

int main()
{
    // Run an infinite loop until user press Ctrl+D (in Mac) or Ctrl+Z (in Windows)
    // eof stands for end-of-file. You will learn in the lab session.
    while (!cin.eof())
    {
        cout << endl << "Choose a filter below : " << endl;
        cout << "Type 1 for Low Pass Filter calculation" << endl;
        cout << "Type 2 for High Pass Filter calculation" << endl;
        cout << "Type 3 for Band Pass Filter calculation" << endl<< endl;

        int user_choice(0);
        cout << "Type in a number between 1 to 3 to choose filter : ";
        cin >> user_choice;

        switch (user_choice)
        {
        case 1:
            // code for low pass filter if user inputs 1
            cout << endl<< "Low Pass Filter calculation goes here" << endl;
            break;
        case 2:
            // code for high pass filter if user inputs 2
            cout << endl<< "High Pass Filter calculation goes here" << endl;
            break;
        case 3:
            // code for band pass filter if user inputs 3
            cout << endl<< "Band Pass Filter calculation goes here" << endl;
            break;
        default:
            // Otherwise, if user press Ctrl+D (in Mac) or Ctrl+Z (in Windows), exit the program. Else, return to main menu.
            if (cin.eof())
            {
                cout << "Exiting" << endl;
            }
            else
            {
                //Gives user a warning and return to the top of the program, until user press Ctrl+D (in Mac) or Ctrl+Z (in Windows)
                cout << endl << endl << "Please enter a valid number (either 1, 2 or 3) for choice." << endl;
            }
            break;
        }
    }
    return 0;
}