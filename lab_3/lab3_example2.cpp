#include <iostream>
using namespace std;

int main()
{
    int integer;
    do
    {
        cout << "Enter an integer between 0 and 120 (inclusively).\n";
        cin >> integer;
    } while (integer < 0 || integer > 120);

    cout << integer;
}

/*
Solution comments

1) The code should have a logical OR operater in the condition to check whether the integer is greater than 120 or lesser than 0
2) A do while loop is preferred as the statement and prompting user needs to be done only once (only one cin to handle)

*/