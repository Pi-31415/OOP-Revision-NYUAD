#include <iostream>
using namespace std;

class Airplane
{
private:
    static int ID_Generator;

    string ID;

public:
    static int getValue() { return ID_Generator; }
};

int main()
{

    return 0;
}