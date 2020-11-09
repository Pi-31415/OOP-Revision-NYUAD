#include <iostream>
using namespace std;

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

};

int main(){
    ComplexNumber c1(3,4);
    return 0;
}