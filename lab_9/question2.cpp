#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    //Constructor
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s)
    {
        if (h >= 0 && h <= 23)
        {
            hour = h;
        }
        if (m >= 0 && m <= 59)
        {
            minute = m;
        }
        if (s >= 0 && s <= 59)
        {
            second = s;
        }
    }

    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }

    void setTime(int h, int m, int s)
    {
        if (h >= 0 && h <= 23)
        {
            hour = h;
        }
        if (m >= 0 && m <= 59)
        {
            minute = m;
        }
        if (s >= 0 && s <= 59)
        {
            second = s;
        }
    }

    void setHour(int h)
    {
        if (h >= 0 && h <= 23)
        {
            hour = h;
        }
    }
    void setMinute(int m)
    {
        if (m >= 0 && m <= 59)
        {
            minute = m;
        }
    }
    void setSecond(int s)
    {
        if (s >= 0 && s <= 59)
        {
            second = s;
        }
    }
    void print()
    {
        // prints out the current time in hh:mm:ss format
        // inserting zero where necessary
        if (hour <= 9)
        {
            cout << '0' << hour;
        }
        else
        {
            cout << hour;
        }
        cout << ":";
        if (minute <= 9)
        {
            cout << '0' << minute;
        }
        else
        {
            cout << minute;
        }
        cout << ":";
        if (second <= 9)
        {
            cout << '0' << second;
        }
        else
        {
            cout << second;
        }
    }
    void nextSecond()
    {
    }
};

int main()
{
    Time t1;
    t1.setTime(24, 10, 11);
    //t1.print();
    cout << t1.getMinute();
    return 0;
}