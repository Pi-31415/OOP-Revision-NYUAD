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
        cout << endl;
    }
    void nextSecond()
    {
        if (hour == 23 && minute == 59 && second == 59)
        {
            setTime(0, 0, 0);
        }
        else
        {
            second++;
            //increment the seconds, minutes and hours until 23:59:59
            if (second == 60)
            {
                second = 0;
                minute++;
            }
            if (minute == 60)
            {
                minute = 0;
                hour++;
            }
        }
    }
};

int main()
{
    Time t1;
    t1.setTime(23, 58, 0);

    for (int i = 0; i <= 200; i++)
    {
        //test next second function
        t1.print();
        t1.nextSecond();
    }

    return 0;
}

/*
Output:

23:59:36
23:59:37
23:59:38
23:59:39
23:59:40
23:59:41
23:59:42
23:59:43
23:59:44
23:59:45
23:59:46
23:59:47
23:59:48
23:59:49
23:59:50
23:59:51
23:59:52
23:59:53
23:59:54
23:59:55
23:59:56
23:59:57
23:59:58
23:59:59
00:00:00
00:00:01
00:00:02
00:00:03
00:00:04
00:00:05
00:00:06
00:00:07
00:00:08
00:00:09
00:00:10
00:00:11
00:00:12

*/