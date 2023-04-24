/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 5 A & B & C & D & E & F & G

Lab 5 A & B & C & D & E & F & G: takes two ints and see if they are divisible
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if (d == 0) {
        return false;
    }
    else if (n%d == 0) {
            return true;
        }
    else {
        return false;
    }
}

bool isPrime(int n)
{
    if (n >= 2) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        } return true;
    }
    else {
        return false;
    }
}

int nextPrime(int n)
{
    n++;
    if (n <= 1) {
        return 2;
    }
    else {
        while (isPrime(n) == false) {
            n++;
        }
    }
    return n;
}

int countPrimes(int a, int b)
{
    int count = 0;

    for (a; a <= b; a++) {
        if (isPrime(a) == true) {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n)
{
    if (isPrime(n) == true) {
        if (isPrime(n+2) == true || isPrime(n-2) == true) {
            return true;
        }
        else {
            return false;
        }
    } return false;
}

int nextTwinPrime(int n)
{
    n++;
    while (isTwinPrime(n) == false) {
        n++;
        isTwinPrime(n);
    }
    return n;
}


int largestTwinPrime(int a, int b)
{
    int largest = -1;
    for (b; b >= a; b--) {
        if (isTwinPrime(b)) {
            largest = b;
            break;
        }
    }
    return largest;;
}

int main()
{
    int num1, num2;
    cout << "Enter First num: "; cin >> num1;
    cout << "Enter Second num: "; cin >> num2;

    cout << largestTwinPrime(num1, num2) << endl;
    return 0;
}