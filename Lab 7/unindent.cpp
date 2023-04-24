/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 7 A

Lab 7 A: Fixes indented lines that are wrong.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


string removeLeadingSpaces(string line)
{
    string new_line;
    string dump;
    int j;
    
    for (int i = 0; i < line.length(); i++) {
        if (isspace(line[i])) {
            dump = dump + line[i];
        }
        else {
            j = i;
            break;
        }
    }

    for (j; j < line.length(); j++) {
        new_line = new_line + line[j];
    }

    return new_line;
}

int main()
{
    string lines;
    while (getline(cin, lines)) {
        cout << removeLeadingSpaces(lines) << endl;
    }
    return 0;
}