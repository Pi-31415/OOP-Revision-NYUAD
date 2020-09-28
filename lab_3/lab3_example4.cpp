#include <iostream>
using namespace std;

int main()
{
    // product variable is to hold the products while looping through
    // user input is n where output is n!

    int product(1), user_input(1);

    //Validate user input

    do
    {
        cout << "Please enter an integer greater or equal to 0 to calculate factorial : ";
        cin >> user_input;
    } while (user_input < 0);

    // Give back 1 as output since 0! = 1
    // Else, multiply product with the user input value and loop
    if (user_input == 0)
    {
        cout << endl << user_input << "! = 1";
    }
    else
    {
        for (int i = user_input; i > 0; i--)
        {
            product *= i;
        }
        cout << endl << user_input << "! = " << product << "\n\n";
    }
}