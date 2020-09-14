#include <iostream>		
using namespace std;

/*
Write a C++ program to multiply two integer 
numbers with 8 and 16 and output the sum of 
numbers (you are only allowed to use bitwise shift and addition arithmetic operators).

*/

int main() {
    int i(3);
    int k(4);
    //bitshift left by 3 is equivalent to multiplication by 8, and bitshift left by 4 is equivalent to multiplication by 16
    cout << (i<<3)+(k<<4) << endl;
	return 0;
}
