/*
Original Code before correction
#include <iostream> 
void main()
{
 int x, y=131, *ptr;
 x=132;
 y=*ptr;
 cout << x << endl;
 cout << y << endl;
 return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y = 131;
    int *ptr = &x;
    x = 132;
    y = *ptr;
    cout << x << endl;
    cout << y << endl;
    return 0;

    /*
    Output: 
    132
    132
    */
}
