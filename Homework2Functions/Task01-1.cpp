// Task01-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int abs(int num)
{
	if (num < 0)
	{
		return -num;
	}

	return num;
}

int main()
{
	cout << "Number: ";
	int number;
	cin >> number;

	cout << "Abs value: " << abs(number) << endl;

	return 0;
}
