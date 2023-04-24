/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 2 A

Lab 2 A: Asks the user to input an integer in the range 0 < n < 100.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Please enter an integer: "; 
    cin >> num;
    
    if (num <= 0 || num >= 100)
    {
    do {
        cout << "Re-enter number: ";
        cin >> num;
    }
    while (num <= 0 || num >= 100);
    }

    int math;
    math = pow(num, 2);
    cout << endl << "Number squared is " << math;
    return 0;
}