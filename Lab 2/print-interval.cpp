/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 2 B

Lab 2 B: Takes two number (One lower and one upper) prints them out with spaces.
*/

#include <iostream>
using namespace std;

int main()
{
    int lower;
    cout << "Please enter L: "; cin >> lower;
    int upper;
    cout << "Please enter U: "; cin >> upper;

    int i;
    for (i = lower; i < upper; i++) {
        cout << i << " ";
    }
    return 0;
}