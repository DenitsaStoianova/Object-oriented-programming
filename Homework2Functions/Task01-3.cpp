// Task01-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int min(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int main()
{
	int number1, number2;
	cin >> number1 >> number2;

	cout << "Min number: " << min(number1, number2) << endl;
	cout << "Max number: " << max(number1, number2) << endl;

	return 0;
}
