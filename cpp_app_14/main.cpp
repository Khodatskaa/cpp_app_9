#include <iostream>

using namespace std;

int main()
{
	double num1, num2, res;
	int choice;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Choose operation: \n";
	cout << "1. +\n";
	cout << "2. -\n";
	cout << "3. *\n";
	cout << "4. /\n";
	cin >> choice;

	cout << "Enter second number: ";
	cin >> num2;

	double* ptr1 = &num1;
	double* ptr2 = &num2;

	switch (choice)
	{
		case 1:
			res = *ptr1 + *ptr2;
			cout << "Result: " << *ptr1 << " + " << *ptr2 << " = " << res << endl;
			break;
		case 2:
			res = *ptr1 - *ptr2;
			cout << "Result: " << *ptr1 << " - " << *ptr2 << " = " << res << endl;
			break;
		case 3:
			res = *ptr1 * *ptr2;
			cout << "Result: " << *ptr1 << " * " << *ptr2 << " = " << res << endl;
			break;
		case 4:
			res = *ptr1 / *ptr2;
			cout << "Result: " << *ptr1 << " / " << *ptr2 << " = " << res << endl;
			break;

			default:
				cout << "Invalid choice!" << endl;
				break;
	}

	return 0;
}