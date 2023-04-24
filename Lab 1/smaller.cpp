/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 1 A

Lab 1 A: Compares 2 integers or numbers to identify which one is the smaller number.
*/

#include <iostream>
using namespace std;

int main()
{
	int first_num;
	cout << "Enter the first number: ";
	cin >> first_num;
	int second_num;
	cout << "Enter the second number: ";
	cin >> second_num;
	
	if (first_num > second_num)
	{
		cout << "The smaller of the two is " << second_num;
	}
	else
	{
		cout << "The smaller of the two is " << first_num;
	}
return 0;	
}
	
