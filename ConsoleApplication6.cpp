// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int &x, int &y);
int main ()
{
	int x, y;
	cout << "Please enter 2 integer for X and Y :" << endl;
	cin >> x >> y;
    swap(x, y);

	cout << "\nX in main is :" << x << endl;
	cout << "Y in  main is :" << y << endl;

	return 0;
}

void swap(int &x, int &y)
{
	cout << "You entered X is :";
	cout << x << endl;
	cout << "You entered Y is :";
	cout << y << endl;

	int temp = x;
	x = y;
	y = temp;

	cout << "\nAfter swap the value X now is :";
	cout << x << endl;
	cout << "After swap the value Y now is :";
	cout << y << endl;
}