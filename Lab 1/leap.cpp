/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 1 C

Lab 1 C: Takes an input from the User as a year then outputs wheater it is a "Leap Year" or a "Common Year".
*/

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	
	if (year % 4 != 0)
	{
		cout << "Common year";
	}
	else if (year % 100 != 0)
	{
		cout << "Leap year";
	}
	else if (year % 400 != 0)
	{
		cout << "Common year";
	}
	else
	{
		cout << "Leap year";
	}
return 0;
}