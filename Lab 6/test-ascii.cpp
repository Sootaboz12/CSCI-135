/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 6 A

Lab 6 A: Tests the ascii code.
*/

#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter sentence: "; getline(cin, word);
    
    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << " " << int(word[i]) << endl;
    }

    return 0;
}
