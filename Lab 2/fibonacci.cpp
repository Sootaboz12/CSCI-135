/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 2 D

Lab 2 D: Fibonacci sequence up to 60.
*/
#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    int i;
    cout << fib[0] << endl << fib[1] << endl;
    for (i = 2; i < 60; i++)
    {
        fib[i] = (fib[i-1] + fib[i-2]);
        cout << fib[i] << endl;
    }

    return 0;
}

// As the numbers are getting increasingly larger, the binary values that are stored wihin the arry is becoming unstable and causing the program to comeup with various values.