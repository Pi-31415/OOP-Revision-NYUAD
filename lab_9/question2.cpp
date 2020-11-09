#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    //Constructor
    Time(int h, int m, int s)
    {
        if (h >= 0 && h <= 23)
        {
            hour = h;
        }
        if (m >= 0 && m <= 23)
        {
            minute = m;
        }
        if (s >= 0 && s <= 23)
        {
            second = s;
        }
        }
};

int main()
{

    return 0;
}