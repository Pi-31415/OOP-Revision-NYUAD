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

        double getImag(){
            return imaginary_value;
        }

        void print() const{
            //prints the complex number in form z = a + b i
            cout << "z = " << real_value << " + " << imaginary_value << " i" <<endl;
        }

};

int main(){
    ComplexNumber c1(3,4);

    c1.print();
    return 0;
}