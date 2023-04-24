/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 7 B

Lab 7 B: Counts open blocks
*/
#include <iostream>
#include <string>
using namespace std;


string removeLeadingSpaces(string line)
{
    int i = 0;
    while (isspace(line[i])) {
        i++;
    }
    return line.substr(i);
}

int countChar(string line, char c)
{
    int character = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            character++;
        }
    }
    return character;
}

string prop_Indent(string line, int& q)
{
    string noSpace = removeLeadingSpaces(line);
    string Indent;
    q = q - countChar(line, '}');

    for (int i = 0; i < q; i++) {
        Indent = Indent + "\t";
    }

    for (int e = 0; e < noSpace.length(); e++) {
        if (line[e] == '{') {
            if (line[e+2] == '}') {
                
            }
        }
        Indent = Indent + noSpace[e];
    }

    q = q + countChar(line, '{');
    return Indent;
}

int main()
{
    string lines;
    int k = 0;

    while (getline(cin, lines)) {
        cout << prop_Indent(lines, k) << endl;
    }
    return 0;
}