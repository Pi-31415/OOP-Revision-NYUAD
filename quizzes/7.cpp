#define PI 3.14

class Circle
{
private:
    int radius;

public:
    Circle()
    {
        radius = 0;
    }

    Circle(int r)
    {
        radius = r;
    }
    double Area();
    double Circumference();
};

double Circle::Area()
{
    return PI * radius * radius;
}

double Circle::Circumference()
{
    return 2 * PI * radius;
}
