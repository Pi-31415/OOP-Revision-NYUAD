#include <iostream>
using namespace std;

class Airplane
{
private:
    static int ID_Generator;

    int Plane_ID;

public:
    static int generateID() 
    { 
        ID_Generator += 1;
        return ID_Generator; 
    
    }
};

int Airplane::ID_Generator = 0;

int main()
{
    std::cout << Airplane::generateID()  << endl;

    return 0;
}