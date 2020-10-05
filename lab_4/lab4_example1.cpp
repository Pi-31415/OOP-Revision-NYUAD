#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   int data(0);

   ofstream outfile;
   outfile.open("Number.txt");

   cout << "Enter 10 numbers." << endl;
   cout << "Number 1 : "; 
   cin >> data;

   outfile << data << endl;

   outfile.close();

   ifstream infile; 
   infile.open("Number.txt"); 

   cout << "Reading from the file" << endl; 
   infile >> data; 
   cout << data << endl;
   
   infile.close();

   return 0;
}