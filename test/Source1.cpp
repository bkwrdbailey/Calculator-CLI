/*
 * Calculator.cpp
 *
 *  Date: 1/18/2020
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

	/*
	 * Fixed line 15 by changing the double quotes to single quotes since
	 * answer is a char variable and not a string variable. Next, I made
	 * the Y value lower case, so it would match the parameter of the while
	 * loop. Finally, i added a semicolon, so to avoid an error. The line
	 * was overall fixed, because if left as it was it would have caused errors.
	 */

	while (answer == 'y')
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2;

		/*
		   *	Added curly brackets to each if else/if conditionals, so they do not run
		   * code outside of their statements
		   */

		if (operation == '+') { // got rid of the semicolon here
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
		}

		/*
		   *	On line 29 I reversed the direction of the arrow between op2 and " = "
		   * due to the line being an output "cout" and not an input "cin".
		   */

		   // Made the other if conditionals else/ifs so more than one will not execute
		else if (operation == '-') { // got rid of the semicolon here
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		}

		else if (operation == '/') {
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
		}

		else if (operation == '*') {
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
		}

		// This will keep looping until valid input is given (y/n)
		do {
			cout << "Do you wish to evaluate another expression? (y/n)" << endl;
			cin >> answer;
			answer = tolower(answer);

			// This lets the user know their input was invalid
			if (! (answer == 'y' || answer == 'n')) {
				cout << "Invalid input, please enter y or n." << endl << endl;
			}

		} while (! (answer == 'y' || answer == 'n'));
	}

	// Notifies the user that the program is done
	cout << "Program Finished." << endl;
}