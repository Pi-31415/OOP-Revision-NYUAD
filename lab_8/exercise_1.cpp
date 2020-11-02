#include <iostream>
using namespace std;
int main()
{

    /*
    variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    int x = 130;
    int *ptr=&x; 
    cout << x << endl;  //expected = 130
    cout << ptr << endl; //expected = 8688
    
    x = 131;
    cout << x << endl; //expected = 131
    cout << &ptr << endl; //expected = 8684

    x = 132;
    cout << &x << endl;
    cout << ptr << endl;

    x = 133;
    cout << &x << endl;
    cout << *ptr << endl;

    if (x != *ptr)
    {
        cout
            << "Hello1" << endl;
    }
    else
    {
        cout << "Hello2" << endl;
    }

    return 0;
}