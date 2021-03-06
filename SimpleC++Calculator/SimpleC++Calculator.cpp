// SimpleC++Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

double add(double value1, double value2)
{
	return value1 + value2;
}

double subtract(double value1, double value2)
{
	return value1 - value2;
}

double multiply(double value1, double value2)
{
	return value1 * value2;
}

double divide(double value1, double value2)
{
	return value1 / value2;
}

int main()
{
	unsigned int choosedOperation = 0;
	string choosenOperationString;

	double value1, value2, result;

	cout << "=======================================================" << endl;
	cout << "		Simple C++ Calculaltor" << endl;
	cout << "=======================================================" << endl;
	cout << endl;

	cout << "Please Enter The Operation You Want to do." << endl;

	cout << "--------------------------------------------------------" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << endl;

	//Checks if input is a number or not. Source : https://stackoverflow.com/questions/3273993/how-do-i-validate-user-input-as-a-double-in-c

	while (1) {
		if ((cin >> choosedOperation)) {
			if (choosedOperation <= 4 && choosedOperation >= 1) 
			{
				break;
			}
			else
			{
				cout << "Please Choose Between the Options That Have Been Provided." << endl;
			}
		}
		else {
			// not a valid number
			cout << "Invalid Input! Please input a numerical value." << endl;
			cin.clear();
			while (cin.get() != '\n'); // empty loop
		}
	}

	cout << "Please Enter the First Value" << endl;
	while (1) {
		if (cin >> value1) {
			// valid number
			break;
		}
		else {
			// not a valid number
			cout << "Invalid Input! Please input a numerical value." << endl;
			cin.clear();
			while (cin.get() != '\n'); // empty loop
		}
	}

	cout << "Please Enter the Second Value" << endl;
	while (1) {
		if (cin >> value2) {
			// valid number
			break;
		}
		else {
			// not a valid number
			cout << "Invalid Input! Please input a numerical value." << endl;
			cin.clear();
			while (cin.get() != '\n'); // empty loop
		}
	}

	switch (choosedOperation)
	{
		case 1:
			result = add(value1, value2);
			choosenOperationString = "Added";
		break;

		case 2:
			result = subtract(value1, value2);
			choosenOperationString = "Subtracted";
		break;

		case 3:
			result = multiply(value1, value2);
			choosenOperationString = "Multiplied";
		break;

		case 4:
			result = divide(value1, value2);
			choosenOperationString = "Divided";
		break;

		default:
			cout << "Invalid Opearation. Please check your input again." << endl;
		break;
	}

	cout << "The Result of " << value1 << " " << choosenOperationString << " by " << value2 << " is : " << result << "."<< endl;

	_getch();

    return 0;
}