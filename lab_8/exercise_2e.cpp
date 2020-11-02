#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 0, *xPtr = &x, *yPtr = &y;
    if(xPtr != NULL){
        cout << (*xPtr / *yPtr) << endl;    
        /*
        Division by 0
        */
    }
        
    return 0;
}
