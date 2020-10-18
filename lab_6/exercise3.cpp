#include <iostream>

#include <iostream>

using namespace std;

void plot (int n);

int main(){
    int value[10] = {19,3,15,7,11,9,13,5,17,1};
    plot(5);
    return 0;
}

void plot(int n){
    //print as many * as n
    for(int i=0;i<n;i++){
        cout <<"*";
    }  
}
