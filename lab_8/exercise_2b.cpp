/*
Code before correcting

#include <iostream>
 
void main()
{
 int x,y=131, *ptr;
 x=132;
 ptr=&x;
 &y=ptr;
 cout << x << endl;
 cout << y << endl;
 return 0;
}

*/

#include <iostream>
using namespace std;
int main()
{
    int x, y = 131, *ptr;
    x = 132;
    ptr = &x;
    y = *ptr;
    cout << x << endl;
    cout << y << endl;
    return 0;
}


/*
Output
132 (as x)
132 (as y through pointer)
*/