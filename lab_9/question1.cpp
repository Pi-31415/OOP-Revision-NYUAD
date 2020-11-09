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

    void setRadius(double r){
        radius = r;
    }

    string getColor(){
        return color;
    }

    void setColor(string c){
        color = c;
    }

    double getArea(){
        return 3.14 * radius * radius;
    }

};

int main()
{
    //construct a new object
    Circle c1(2.0,"yellow");
    c1.setColor("blue");
    cout << c1.getColor();
    return 0;
}