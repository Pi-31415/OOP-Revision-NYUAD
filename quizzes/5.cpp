
#include<iostream>

using namespace std;

#define SIZE 10

int main(){
    int nums[SIZE] = {1, 3, 5, 2, 4, 9, 7, 10, 8, 6};
    
    for(int i = 0; i < SIZE-1; i++){
        int special_index = i;

        for(int j = i+1; j < SIZE; j++){
            if(nums[j] > nums[special_index])
                special_index = j;
        }
        int temp= nums[i];
        nums[i] = nums[special_index];
        nums[special_index] = temp;
    }

    for(int i = 0; i < SIZE; i++)
        cout << nums[i] << "";

    return 0;
}