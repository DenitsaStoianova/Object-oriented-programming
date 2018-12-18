// Task01-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int min(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

int minOf3(int num1, int num2, int num3)
{
	return min(min(num1, num2), num3);
}

int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int maxOf3(int num1, int num2, int num3)
{
	return max(max(num1, num2), num3);
}

int main()
{
	int number1, number2, number3;
	cin >> number1 >> number2 >> number3;

	cout << "Min number: " << minOf3(number1, number2, number3) << endl;
	cout << "Max number: " << maxOf3(number1, number2, number3) << endl;

	return 0;
}
