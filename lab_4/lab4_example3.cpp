#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // This program checks if a file exists or not. 
    //If the file does not exist, then the program prompts the user whether she/he wants to create it or not. 

    string filename("");

    cout << "Enter filename to open : ";
    getline(cin, filename);

    ifstream inputfile;
    // uses io:: in opening mode only for reading
    inputfile.open(filename, ios::in);

    //Attempt to create a file if it does not exist
    if (inputfile.fail())
    {
        cerr << "File " << filename << " does not exist." << endl;
        exit(1);
    }else{
        cout << "File " << filename << " exists." << endl;
    }

}