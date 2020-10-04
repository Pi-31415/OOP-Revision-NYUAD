#include <iostream>
#include <string>
using namespace std;

int main()
{
    // First, initialize a variable choice. If choice is 0, loop back to main menu.
    // For all other input from user (including char and strings), exit the program.
    int choice = 0;
    while (choice == 0)
    {
        //All of your other code goes here
        cout << "Main Menu" << endl;

        //Declare a string to store user input, we will convert it to integer later to see if it is 0
        string input = "";
        cout << "Enter choice : ";

        //This is the same as cin, but gets the whole line
        getline(cin, input);

        //To get the program you describe, I can only think of exception handling in this case
        //We might not have covered this in class, but this is the only way I can come up with

        try
        {
            //First, convert the user input (anything) to an integer if we can
            choice = stoi(input);

            //If choice is 0, loop will go on
            if (choice == 0)
            {
                cout << "Looping back to main menu again." << endl;
            }else{
                // If input is a number, but not 0, the loop will break itself
                cout << "Exiting" << endl;
            }
        }
        catch (...)
        {
            //Otherwise, assume user input is not a number (strings and char) and make choice 1 so that we will be out of loop
            cout << "Exiting" << endl;
            break;
        }
    }
}