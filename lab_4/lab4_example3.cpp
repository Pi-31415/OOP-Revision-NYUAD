#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // This program checks if a file exists or not.
    //If the file does not exist, then the program prompts the user whether she/he wants to create it or not.

    string filename("");

    cout << "Enter filename to check : ";
    //Prompts user for the filename in current directory
    getline(cin, filename);

    ifstream inputfile;
    // uses io:: in opening mode only for reading
    inputfile.open(filename, ios::in);

    //Attempt to create a file if it does not exist
    if (inputfile.fail())
    {
        cerr << "File " << filename << " does not exist in current directory. Would you like to create the file? (Y,n)" << endl;
        //If file fails to open, then prompt the user a choice to create the file.
        string user_choice("n");
        cout << "Enter either Y or n :";
        getline(cin, user_choice);
        if (user_choice == "Y")
        {
            // Create the file if user says Y
            ofstream outfile;
            outfile.open(filename);
            if (!outfile.fail())
            {
                cerr << "File with name "<<filename<<" is successfully created."<<endl;
            }
        }
    }
    else
    {
        cout << "File " << filename << " exists." << endl;
    }
}

/*
Program output

Enter filename to check : testfile.dat
File testfile.dat does not exist in current directory. Would you like to create the file? (Y,n)
Enter either Y or n :Y
File with name testfile.dat is successfully created.
*/