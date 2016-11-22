// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double n, s;
	int a, b;
	cout << "Choose which type of temperature you want to convert\n 1-Fahrenheit\n 2-Celsius\n 3-Kelvin\n";
	cin >> (a);
	switch (a) 
	{
	case 1:{
			cout << "Choose to which type of temperature you want to convert to\n 1-Celsius\n 2-Kelvin ";
			cin >> (b);
			switch (b) {
			case 1: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = (n - 32) / 1.8;
			};
			case 2: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = (n - 32) / 1.8 +273;
			}
			}
			break;
		};
	case 2:{
			cout << "Choose which type of temperature you want to convert\n 1-Fahrenheit\n 2-Kelvin\n";
			cin >> (b);
			switch (b) {
			case 1: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = (n-32)/1.8 ;
			};
			case 2: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = n + 273;

			}
			}
			break;
		};
	case 3:{
			cout << "Choose which type of temperature you want to convert\n 1-Fahrenheit\n 2-Celsius\n";
			cin >> (b);
			switch (b) {
			case 1: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = 1.8*(n - 273) + 32;
			};
			case 2: {
				cout << "Enter the temperature \n";
				cin >> (n);
				s = n-273;
			}
			}
			break;
		};
	default:
		break;
	}
	cout << s;
	cin >> a;
    return 0;
}

