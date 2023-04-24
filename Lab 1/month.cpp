/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 1 D

Lab 1 D: Takes an input from the User as a year & a month (number) then outputs the number of days in that month of that year.
*/

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	int month;
	cout << "Enter month: ";
	cin >> month;
	
	if (year % 4 != 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			cout << "31";
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "30";
		}
		else 
		{
			cout << "28";
		}
	}
	else if (year % 100 != 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			cout << "31";
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "30";
		}
		else 
		{
			cout << "29";
		}
	}
	else if (year % 400 != 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			cout << "31";
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "30";
		}
		else 
		{
			cout << "28";
		}
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			cout << "31";
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "30";
		}
		else 
		{
			cout << "29";
		}
	}
return 0;
}