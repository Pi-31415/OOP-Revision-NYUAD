#include<iostream>

using namespace std;

int my_function(int num){
    if(num <= 1)
        return 1;
    return num + my_function(num-1);
}

int main(){
   cout << my_function(10);
   return 0;
}

