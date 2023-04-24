/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 1 B

Lab 1 B: Compares 3 integers or numbers to identify which one is the smaller number.
*/

#include <iostream>
using namespace std;

int main()
{
	int f_num;
	int s_num;
	int t_num;
	cout << "Enter the first number: ";
	cin >> f_num;
	cout << "Enter the second number: ";
	cin >> s_num;
	cout << "Enter the thrid number: ";
	cin >> t_num;
	
	if (s_num < f_num && s_num < t_num)
	{
		cout << "The smaller of the three is " << s_num;
	}
	else if (t_num < s_num && t_num < f_num)
	{
		cout << "The smaller of the three is " << t_num;
	}
	else if (t_num < s_num && t_num < f_num)
	{
		cout << "The smaller of the three is " << f_num;
	}
	else
	{
		cout << "The smaller of the three is " << f_num;
	}
	return 0;
}