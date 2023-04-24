/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 3 C

Lab 3 C: Start Date & End Date. Then from dates on to that gives highest elevation.
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
string start;
cout << "Enter Start Date: "; cin >> start;
string end;
cout << "Enter End Date: "; cin >> end;

while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

   fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns

         if(date >= start && date <= end)
        {
       if(eastEl > westEl)
        {
           cout << date << " " << "East" << endl;
        }
        else if(eastEl < westEl)
        {
           cout << date << " " << "West" << endl;
        }
        else
        {
           cout << date << " " << "Equal" << endl;
        }
        }
 
}
return 0;
}

