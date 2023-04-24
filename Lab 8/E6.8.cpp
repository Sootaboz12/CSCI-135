/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 8 A

Lab 8 A: Invers the image's color
*/

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size) {
        return false;
    }

    for (int i = 0; i < a_size; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}