#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a(2), b(5), c(10), d(4), result;
    a += (b*d);
    result = a - b / (c % d);
    cout << result << endl;
}