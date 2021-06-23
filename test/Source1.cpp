/*
 * Calculator.cpp
 *
 *  Author: Bailey Barton
 */

#include <iostream>
#include <cstdlib>
using namespace std;

void main()
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'y';

	while (answer == 'y')
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2;

		if (operation == '+') {
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
		}

		else if (operation == '-') {
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		}

		else if (operation == '/') {
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
		}

		else if (operation == '*') {
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
		}

		do {
			cout << "Do you wish to evaluate another expression? (y/n)" << endl;
			cin >> answer;
			answer = tolower(answer);

			if (! (answer == 'y' || answer == 'n')) {
				cout << "Invalid input, please enter y or n." << endl << endl;
			}

		} while (! (answer == 'y' || answer == 'n'));
	}

	cout << "Program Finished." << endl;
}
