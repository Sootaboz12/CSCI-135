/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 D

Lab 4 D: Takes length of a right triangle and couts it.
*/

#include <iostream>
using namespace std;

int main ()
{
    int length;
    cout << "Input side length: "; cin >> length;
    cout << endl;

    cout << "Shape: ";
    for (int i = 0; i < length; i++) {
    cout << endl;
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
  }
  return 0;
}