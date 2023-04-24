/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 4 C

Lab 4 C: Takes size of the cross and prints the cross according to its dimensions.
*/

#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Input size: ";
  cin >> size;

  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << endl;
    for (int j = 0; j < size; j++) {
      if (i == j || i == size - j - 1) 
      {
        cout << "*";
      } 
      else 
      {
        cout << " ";
      }
    }
  }
  return 0;
}
