#include <iostream>
#include <iomanip>
#define COLUMN_SIZE 10

using namespace std;

void plot (int n);

int main(){
    int value[10] = {19,3,15,7,11,9,13,5,17,1};
    int counter(0);

    //print headers
    cout.setf(ios::left);
    cout <<setw(COLUMN_SIZE)<< "Element" <<setw(COLUMN_SIZE)<< "Value" << setw(COLUMN_SIZE)<<"Histogram"<<endl;

    for(int i:value){
        //print tabular data
        cout <<setw(COLUMN_SIZE)<< counter <<setw(COLUMN_SIZE)<< i;
        plot(i);
        cout <<endl;
        counter++;
    }
    //plot(5);
    return 0;
}

void plot(int n){
    //print as many * as n
    for(int i=0;i<n;i++){
        cout <<"*";
    }  
}

/*
Output
Element   Value     Histogram 
0         19        *******************
1         3         ***
2         15        ***************
3         7         *******
4         11        ***********
5         9         *********
6         13        *************
7         5         *****
8         17        *****************
9         1         *
*/
