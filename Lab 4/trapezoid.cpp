/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 F

Lab 4 F: Takes the height and width of a symbol and prints it.
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height;

    cout << "Input width: "; cin >> width;
    cout << "Input height: "; cin >> height;
    
    if (width - ((height - 1) * 2) <= 0) { 
        cout << "Impossible shape!" << endl;
        return 0;
        }

    for (int i = 0; i < height; ++i) {
        cout << endl;
        for (int spaces = height + i; spaces > 0; --spaces) {
            cout << " ";
        }
        for (int stars = 0; stars < (width - 2 * i); ++stars) {
            cout << "*";
        }
    }
    return 0;
}