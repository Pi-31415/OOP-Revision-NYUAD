#include <iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;

    public:
        Point(int X = 0, int Y = 0)
        {
            x = X;
            y = Y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        void setX(int X){
            x = X;
        }
        void setY(int Y){
            y = Y;
        }
        void setXY(int X, int Y)
        {
            x = X;
            y = Y;
        }

};

int main()
{

    return 0;
}