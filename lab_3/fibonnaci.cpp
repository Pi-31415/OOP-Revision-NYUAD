#include<iostream>
using namespace std;

int main(){
    int index(0),fib1(1),fib2(1),next_number(0);
    cout << "Please enter an integer n to generate fibonnaci sequence to nth term : ";
    cin >> index;

    for(int i=0;i<index;i++){
        cout << fib1;
        if(i<index-1){
            cout<<",";
        }else{
            cout<<endl;
        }
        next_number = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_number;
    }

}

/*
Output : 

Please enter an integer n to generate fibonnaci sequence to nth term : 10
1,1,2,3,5,8,13,21,34,55

*/