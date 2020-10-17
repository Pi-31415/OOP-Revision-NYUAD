#include <iostream>
using namespace std;

int main()
{

    int natural_numbers[5] = {500,600,9999,45,1234};
                            // 0,1,2,3,4
    int maximum(0);
    for(int i=0;i<5;i++){
        if(natural_numbers[i] >= maximum){
            maximum = natural_numbers[i];
        }
    }

    cout << maximum;

}