#include <iostream>
using namespace std;
int main()
{

    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    int x = 130;
    int *ptr=&x; 
    cout << x << endl;  //expected = 130
    cout << ptr << endl; //expected = 8688
    
    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    x = 131;
    cout << x << endl; //expected = 131
    cout << &ptr << endl; //expected = 8684

    /*
    Variable x into memory at address 8688 and the ptr variable at 8684. 
    */
    x = 132;
    cout << &x << endl; // expected = 8688
    cout << ptr << endl; // expected = 8688

    x = 133;
    cout << &x << endl;// expected = 8688
    cout << *ptr << endl;// expected = 8684

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