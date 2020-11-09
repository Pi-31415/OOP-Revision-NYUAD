#include <iostream>
using namespace std;

/*
Design a C++ class to represent complex numbers. The complex class should have a real 
value and an imaginary value. The complex class should define functions to process the 
complex number such as: setComplex(), getReal(), getImag(), print(), isReal(), and isImag(). 
Write a program that implements this class and test it.

*/

class ComplexNumber{
    private:
        double real_value;
        double imaginary_value;
    public:
        //Declare Constructor
        ComplexNumber(double real = 0.0 , double imaginary = 0.0){
            real_value = real;
            imaginary_value = imaginary;
        }

        double getReal(){
            return real_value;
        }

        double getImag(){
            return imaginary_value;
        }

        void print() const{
            //prints the complex number in form z = a + b i
            cout << "z = " << real_value << " + " << imaginary_value << "i" <<endl;
        }

        bool isReal(){
            //returns true if the number contains no imaginary part
            if(imaginary_value == 0.0){
                return true;
            }
        }

        bool isImag(){
            //returns true if imaginary part of number is present
            if(imaginary_value != 0.0){
                return true;
            }
        }

};

int main(){
    ComplexNumber c1(3,4);

    c1.print();
    cout << "The number is imaginary : " << c1.isImag() <<endl;

    return 0;
}