// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a , b , temp;
	cout << "please enter 2 integer for a and b :";
	cin >> a >> b;

	cout << "Before swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;
}
