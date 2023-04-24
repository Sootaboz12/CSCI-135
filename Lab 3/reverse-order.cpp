/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 3 A

Lab 3 A: Asks user date in string and prints out storage for that date
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>
#include <bits/stdc++.h>
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

string start;                               // Promts the User to enter start date MM/DD/YYYY
cout << "Enter Start Date: "; cin >> start;    
string end;
cout << "Enter End Date: "; cin >> end;     // Promts the User to enter end date MM/DD/YYYY
cout << endl;

vector<double> elevation;                   // Declares the data vector (array)
vector<string> times;                       // Declares the string vector for dates (string)

while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

   fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns

    if (date >= start && date <= end) {       // if the dates are between start and end it will
            elevation.push_back(westEl);     // authomatically loop and enter the data values.
            times.push_back(date);
    }
}

reverse(elevation.begin(), elevation.end()); // reverses the data stored in the vectors.
reverse(times.begin(), times.end());         // reverses the datta stored in the vectors.

for (int i = 0; i < elevation.size(); i++) {
    cout << times[i] << " " << elevation[i] << endl;   // loops to print out the data
}

return 0;
}
