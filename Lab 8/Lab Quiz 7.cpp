/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 7 Quiz.

Lab 7 Quiz.
*/

#include <iostream>
using namespace std;

void remove_e(string& str){
  string temp;
  for (int i = 0; i < str.length(); i++){
    if (str[i] != 'e'){
      temp += str[i];
    }
  }
  str = temp;
}

int main() {
  string s = "elephant";
  remove_e(s);
  cout << s << endl;
}