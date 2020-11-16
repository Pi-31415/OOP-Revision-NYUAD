#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int n = 1, int d = 1)
    {
        numerator = n;
        denominator = d;
    }

    void printFraction()
    {
        //This will reduce the fraction to simplest terms
        int max = 0;
        if(numerator > denominator){
            max = numerator;
        }
        else if(numerator < denominator){
            max = denominator;
        }
        else{
            cout << 1;
        }


        for(int i = 2;i<= max;i++){
            if(numerator%i == 0 && denominator%i == 0){
                cout << (numerator/i) << "/" << (denominator/i)<<endl;
            }else{
                cout << numerator << "/" << denominator<<endl;
            }
        }

        //cout << numerator << "/" << denominator;
    }

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }
};

int main()
{

    Fraction f1(6,36);
    f1.printFraction();
    return 0;
}