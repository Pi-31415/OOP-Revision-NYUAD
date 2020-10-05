#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //This program copy the contents of one file (source) into another file (target)
    string filename_source("");
    string filename_target("");

    cout << "Enter source filename : ";
    //Prompts user for the source filename in current directory
    getline(cin, filename_source);

    ifstream inputfile;
    // uses io:: in opening mode only for reading
    inputfile.open(filename_source, ios::in);

    //Attempt to create a file if it does not exist
    if (inputfile.fail())
    {
        cerr << "File " << filename << " cannot be opened. Exiting program." << endl;
        exit(1);
    }
}

/*
Program output

Enter filename to check : testfile.dat
File testfile.dat does not exist in current directory. Would you like to create the file? (Y,n)
Enter either Y or n :Y
File with name testfile.dat is successfully created.
*/