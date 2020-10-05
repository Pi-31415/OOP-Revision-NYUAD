#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string filename("");
    
    cout<< "Enter filename to analyze : ";
    getline(cin,filename);
    cout << filename;

    ifstream inputfile;
    inputfile.open(filename,ios::in);

    if (inputfile.fail()) 
    {
        cerr << "File "<<filename<<" could not be opened."<<endl;
        exit(1); 
    }

    //initialize variables for counting
    int words(0),lines(0);


}