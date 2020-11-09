#include <iostream>
#include <string>
using namespace std;

class Circle
{
private:
    double radius;
    string color;

public:
    //Constructor
    Circle(double r = 1.0, string c = "red")
    {
        radius = r;
        color = c;
    }

    double getRadius(){
        return radius;
    }

    double setRadius(double r){
        radius = r;
    }

    string getColor(){
        return color;
    }

    

};

int main()
{

    return 0;
}