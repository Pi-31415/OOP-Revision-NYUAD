#include<iostream>

using namespace std;

void do_something(int* num1ptr, int* num2ptr);
int main(){
    int num1, num2;
    cout << "Enter 2 numbers" << endl;
    cin >> num1 >> num2;
    do_something(&num1, &num2);
    cout << num1 << " " << num2;

}

void do_something(int* num1ptr, int* num2ptr){
    int temp = *num1ptr;
    *num1ptr = *num2ptr;
    *num2ptr = temp;
}