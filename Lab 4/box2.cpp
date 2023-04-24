/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 A

Lab 4 A: Takes the height and width of a symbol and prints it.
*/

#include <iostream>
using namespace std;

int main()
{
    int width;
    cout << "Enter a width: "; cin >> width;
    int height;
    cout << "Enter a height: "; cin >> height;

    for (int i = 0; i < height; i++) {
        cout << endl;;
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
    }

    return 0;
}