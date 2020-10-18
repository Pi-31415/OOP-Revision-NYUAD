#include<iostream>

using namespace std;

#define SIZE 10

int main(){
    int nums[SIZE];
    int result;
    cout << "Enter 10 values" << endl;
    for(int i = 0; i < SIZE; i++)
        cin >> nums[i];

    result = nums[0];

    for(int i = 0; i < SIZE; i++){
        if(nums[i] % 2 == 0 && nums[i] > result)
                result = nums[i];
        
    }

    cout << result << endl;

    return 0;
}
 