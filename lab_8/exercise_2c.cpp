/*
Code before editing

    #include <iostream>	
    void main()
    {
    int x=131,y, *ptr=y;
    y=132;
    *ptr=x;
    cout << x << endl;
    cout << y << endl;
    return 0;
    }
*/

#include <iostream>
using namespace std;

int main()
{
 int x=131,y, *ptr=&y;
 y=132;
 ptr=&x;
 cout << x << endl;
 cout << y << endl;
 return 0;
}
