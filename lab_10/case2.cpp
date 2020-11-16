#include <iostream>
#include <string>
using namespace std;

class Airplane
{
private:
    static int ID_Generator;
    string Plane_ID;
    string Airline;
    double position[3];
    string type;
    
public:
    Airplane()
    {
        //Automatically assign aircraft ID
        string ID = to_string(Airplane::generateID());
        Plane_ID = "A-"+ID;
    }
    //Accessor Functions
    string getID()
    {
        return Plane_ID;
    }

    //Prints all the information about a particular plane
    void printInfo(){
        cout << endl << "Information for Aircraft " << Plane_ID << " : " << endl;

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

    A1.printInfo();

    Airplane A2;

    A2.printInfo();

    Airplane A3;

    A3.printInfo();

    return 0;
}