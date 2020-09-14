#include <iostream>
using namespace std;
int main()
{
    int x(0),y(0); // Initialize the variables
    // Ask user for input
    cout << "Input an integer x : ";
    cin >> x;
    cout << "Input an integer y : ";
    cin >> y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x + y = " << x+y << endl;
    cout << "x / y = " << x/y << endl;
    cout << "x % y = " << x%y << endl;
    cout << "x was " << x << endl;
    x *= 2;
    cout << "But after x *= 2, x is now " << x << endl;
    cout << "y was " << y << endl;
    y %= 2;
    cout << "But after y %= 2, y is now " << y << endl;
    cout << "\nIncrement postfix : ";
    cout << "x was " << x;
    x++;
    cout << ". But after x++, x is now " << x << endl;
    cout << "\nDecrement prefix : ";
    cout << "y was " << y;
    --y;
    cout << ". But after --y, y is now " << y << endl;
}