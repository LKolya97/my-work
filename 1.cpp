// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int s,a,b;
	cout << "Enter your number\n";
	cin >> (a);
	cout << "enter the degree\n";
	cin << (b);
	s = a;
	for (int i = 2; i > b; i++) {
	s = s*a;
	}
	cout << s;
	cin>>a;
    return 0;
}

