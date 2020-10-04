#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    //Initialize variable input as an empty string
    //Variable number will hold the number part of the user input
    //For example, if user types in 10 kOhm, number will hold 10.
    string input("");
    double number(0);
    //converted input will hold the final adjusted numerical value (e.g. 10 kOhm will be 10000)
    double converted_input(0);
    //Then get data from user. This is the same as cin, but reads the whole line (including spaces)
    cout << "Enter input (such as 20 kOhm) : ";
    getline(cin, input);

    //The function stod tries to convert the string into a double
    //The string must include a number part for it to work
    number = stod(input);

    //The code below finds the word kOhm in the user input string, and adjust the number if required
    if (input.find("kOhm") != string::npos)
    {
        //The adjusting code goes here, here you multiply by 10^3 since kilo is 1000
        converted_input = number * pow(10, 3);
    }
    //then you continue with else if for all units you want to detect, replacing the word "kOhm" in if above

    //Now see the results
    cout << "User Input : " << input << endl;
    cout << "Detected Number : " << number << endl;
    cout << "Adjusted Number : " << converted_input << endl;
}