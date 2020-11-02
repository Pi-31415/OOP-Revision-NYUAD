#include <iostream>
void main()
{
 int x[2]={1,2}, *ptr;
 //need to be the address not the variable (should be &x)
 ptr=x;
 ptr=&x[0];
 ptr=x[1];
 cout << x << endl;
 cout << y << endl;
 return 0;
}
