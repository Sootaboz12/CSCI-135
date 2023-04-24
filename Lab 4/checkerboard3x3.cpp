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
    cout << "Input Width: "; cin >> width;
    cout << "Input Height: "; cin >> height;

    int co_Star = 0, co_Empty = 0;

    for (int i = 0; i < height; i++) {
        cout << endl;
        for (int z = 0; z < width; z++) {
            if (((z % 6) < 3 && (i % 6) < 3) || ((z % 6) >= 3 && (i % 6) >= 3)) {
                if (co_Star < 3) {
                    cout << "*";
                }
                co_Star = co_Star + 1;
                if (co_Star == 3) {
                    co_Star = 0;
                }
            }
            else {
                if (co_Empty < 3) {
                    cout << " ";
                }
                co_Empty = co_Empty + 1;
                if (co_Empty == 3) {
                    co_Empty = 0;
                }
            }
        }
    }

    return 0;
}