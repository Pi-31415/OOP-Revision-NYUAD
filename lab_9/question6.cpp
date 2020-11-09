#include <iostream>
using namespace std;

class Player{

    private:
        string playerName;
        double xPos;
        double yPos;
        int lifescore;
        bool status;

    public:
        Player(string name="defaultPlayer",double x = 0.0,double y = 0.0, int life = 100,bool alive = true){
            playerName = name;
            xPos = x;
            yPos = y;
            lifescore = life;
            status = alive;
        }

};

int main(){

    return 0;
}