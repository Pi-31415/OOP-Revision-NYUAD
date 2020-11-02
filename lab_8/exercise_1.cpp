#include <iostream>
using namespace std;
int main()
{

    /*
    Question:
    Assuming that the statement int x, *ptr=&x; places the variable x into memory at 
    address 8688 and the ptr variable at 8684.  Write down the output you expect for 
    the following code
    */
    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    int x = 130;
    int *ptr = &x;
    cout << x << endl;   //expected = 130
    cout << ptr << endl; //expected = 8688

    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    x = 131;
    cout << x << endl;    //expected = 131
    cout << &ptr << endl; //expected = 8684

    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    x = 132;
    cout << &x << endl;  // expected = 8688
    cout << ptr << endl; // expected = 8688

    x = 133;
    cout << &x << endl;   // expected = 8688
    cout << *ptr << endl; // expected = 133 (contents of x)

    if (x != *ptr)
    {

        cout
            << "Hello1" << endl;
    }
    else
    {
        cout << "Hello2" << endl;
    }
    // Expected to output hello2 *ptr directly points to the contents of variable x

    return 0;
}