/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 2 C

Lab 2 C: Sorts an array
*/
#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    int i;
    for (i = 0; i < 10; i++) {
        myData[i] = 1;
    }

    int index;
    int value;
    do {
        for (i = 0; i < 10; i++)
        {
            cout << myData[i] << " ";
        }
        cout << endl <<  "Input Index: "; cin >> index;
        cout << "Input Value: "; cin >> value;
        if (0 <= index && index < 10)
        {myData[index] = value;}

    } while (index < 10 && index >= 0);

    cout << "Index out of range. Exit.\n";
        
    return 0;
}