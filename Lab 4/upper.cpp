/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 E

Lab 4 E: Takes length of a right triangle and couts it in reverse.
*/

#include <iostream>
using namespace std;

int main ()
{
    int length;
    cout << "Input side length: "; cin >> length;
    cout << endl;

    for (int i = 0; i <= length; i++) {
        cout << endl;
        for (int j = 0; j <= i; j++) {
        cout << " ";
        }
        for (int q = 0; q < length - i; q++) {
            cout << "*";
        }
    }
    return 0;
}