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
    bool is_civil;

public:
    //Default Constructor
    Airplane()
    {
        //Automatically assign aircraft ID
        string ID = to_string(Airplane::generateID());
        Plane_ID = "A-"+ID;
        Airline = "Unknown";
        position[0] = 0;
        position[1] = 0;
        position[2] = 0;
        is_civil = true;
    }
    //Constructor with user input
    Airplane(string airline, double position_x,double position_y,double position_z,bool Civil)
    {
        //Automatically assign aircraft ID
        string ID = to_string(Airplane::generateID());
        Plane_ID = "A-"+ID;
        Airline = airline;
        position[0] = position_x;
        position[1] = position_y;
        position[2] = position_z;
        is_civil = Civil;
    }
    //Accessor Functions
    string getID()
    {
        return Plane_ID;
    }

    //Prints all the information about a particular plane
    void printInfo(){
        cout << endl << "Information for Aircraft " << Plane_ID << " : " << endl;
        cout << "Airline : " << Airline<<endl;
        cout << "x-coordinate : " << position[0]<<endl;
        cout << "y-coordinate : " << position[1]<<endl;
        cout << "z-coordinate : " << position[2]<<endl;
        cout << "Aircraft Type : ";
        if(is_civil){
            cout << "Civil" <<endl;
        }else{
            cout << "Military" <<endl;
        }
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
    Airplane A1("Boeing",1,2,3,true);
    A1.printInfo();

    Airplane A2("Galatic",5,-5,8,false);
    A2.printInfo();

    Airplane A3;
    A3.printInfo();

   

    return 0;
}