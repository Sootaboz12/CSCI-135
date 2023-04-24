/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 6 B

Lab 6 B: Tests the ascii code.
*/

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift)
{
    char a;
    
    if ((96 < int(c) && int(c) < 123)) {

       if(int(c) + rshift < 123) { 
          a = int(c) + rshift; 
          return char(a);
        }
        else if(int(c) + rshift > 122){ 
            a = (int(c)) + rshift; 
            a = a - 122; 
            return char(96 + a); 
        }
    }
    
    if ((64 < int(c) && int(c) < 91)) {

        if (int(c) + rshift < 91) {
            a = (int(c)) + rshift;
            return (char)a;
        }
        else if (int(c) + rshift > 90) {
            a = int(c) + rshift;
            a = a - 90;
            return char(64 + a);
        }
    }
    return c;
}

string encryptCaesar(string plaintext, int rshift)
{
    string encrypted = "";
    for (int i = 0; i < plaintext.length(); i++) {
         if(isalpha(plaintext[i])){
            encrypted = encrypted += shiftChar(plaintext[i], rshift);
        }
        else{
            encrypted = encrypted += plaintext[i];
        }
    }
    return encrypted;
}

string encryptVigenere(string plaintext, string keyword)
{
    string new_word = "";
    int j = 0;

    for (int i = 0; i < plaintext.length(); i++) {

        if(j > keyword.length() - 1){
            j = 0;
        }

        if (isalpha(plaintext[i])) {
            new_word += shiftChar(plaintext[i], int(keyword[j]) - 97);
            j = j + 1;
        }
        else {
            new_word += plaintext[i];
        }
    }
    return new_word;
}

string decryptCaesar(string ciphertext, int rshift)
{
    string decrypt;
    int lshift = 26 - rshift;
    for (int i = 0; i < ciphertext.length(); i++) {
        if (isalpha(ciphertext[i])) {
            decrypt = decrypt + shiftChar(ciphertext[i], lshift);
        }
        else {
            decrypt = decrypt + ciphertext[i];
        }
    }
    return decrypt;
}

string decryptVigenere(string ciphertext, string keyword)
{
    string new_word = "";
    int j = 0;

    for (int i = 0; i < ciphertext.length(); i++) {

        if(j > keyword.length() - 1){
            j = 0;
        }

        if (isalpha(ciphertext[i])) {
            new_word += shiftChar(ciphertext[i], 26 - (int(keyword[j]) - 97));
            j = j + 1;
        }
        else {
            new_word += ciphertext[i];
        }
    }
    return new_word;
}    

int main()
{
    string word;
    getline(cin, word);
    int password;
    cin >> password;

    cout << encryptCaesar(word, password) << endl;
    string dmng = encryptCaesar(word, password);
    cout << decryptCaesar(dmng, password);
}