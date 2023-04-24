/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 3 B

Lab 3 B: Identify the minimum and maximum of the data.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
string junk;        // new string variable
getline(fin, junk); // read one line from the file 
string date;
double eastSt, eastEl, westEl, westSt;
double max = 0;
double min = 100;
while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                               //ignorring the remaining columns
    
    while (eastSt > max)
    {
        max = eastSt;
    }
    while (eastSt < min)
    {
        min = eastSt;
    }
    
}

cout << "minimum storage in East basin: " << min << " billion gallons." << endl;
cout << "MAXimum storage in East basin: " << max << " billion gallons." << endl;
return 0;
}