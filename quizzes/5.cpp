#include<iostream>
#include<fstream>

#define ROW_SIZE 2
#define COL_SIZE 6

using namespace std;

int main(){
    char letters[ROW_SIZE][COL_SIZE] = {'d', 'e', 'a', 'r', ' ', ' ', 'f', 'r', 'i', 'e', 'n', 'd'};
    
    ifstream inFile("myFile.txt", ios::in);
    if(inFile.fail()) exit(1);

    for(int i = 0; i < COL_SIZE; i++)
        inFile.get(letters[1][i]);

    for(int i = 0; i < ROW_SIZE; i++)
        for(int j = 0; j < COL_SIZE; j++)
            cout << letters[i][j];
    
    inFile.close();
    return 0;
}
 