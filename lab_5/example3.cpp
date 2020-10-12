#include <iostream>

using namespace std;

double Cel_to_Fahr(double celsius)
{
    return (celsius*1.8) + 32.0;
}

double Cel_to_Kel(double celsius)
{
    return celsius + 273.2;
}
// This program takes the input as Celcius and gives user the choice to calculate Kelvin or Fahrenheit
int main()
{
    int user_choice(0);
    double  user_input(0);
    //Put user in an infinite loop until eof character is detected
    while (cin.eof() != true)
    {
        cout << endl << "Temperature converter"<<endl<<"Select an option either 1 or 2." << endl;
        cout << "1. Celsius to Fahrenheit"<<endl;
        cout << "2. Celsius to Kelvin"<<endl;
        cout << "Hit Ctrl + D to exit."<<endl;
        //Prompt user for choice
        cout << endl <<"Choice : ";
        cin >> user_choice;
        if (user_choice == 1){
            cout << "Please enter a temperature in Celsius : ";
            cin >> user_input;
            cout <<user_input <<" Celsius = "<< Cel_to_Fahr(user_input) << " Fahrenheit" << endl;
        }
        else if(user_choice == 2){
            cout << "Please enter a temperature in Celsius : ";
            cin >> user_input;
            cout <<user_input <<" Celsius = " << Cel_to_Kel(user_input) << " Kelvin" << endl;
        }else{
            cout << "Please enter a valid choice, or Ctrl + D to exit." << endl;
        }
        
    }
    return 0;
}