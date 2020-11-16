#include <iostream>
#include <string>
using namespace std;

class Airplane
{
private:
    static int ID_Generator;

    string Plane_ID;

public:
    Airplane()
    {
        //Automatically assign aircraft ID
        string ID = to_string(Airplane::generateID());
        Plane_ID = "A-"+ID;
        
    }
    string getID()
    {
        return Plane_ID;
    }
    static int generateID()
    {
        ID_Generator += 1;
        return ID_Generator;
    }
};

//Automatically generate Airplane IDs
int Airplane::ID_Generator = 0;

int main()
{
    Airplane A1;

    cout << A1.getID();

    Airplane A2;

    cout << A2.getID();

    Airplane A3;

    cout << A3.getID();

    return 0;
}