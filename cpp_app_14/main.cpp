#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	int *x = &num1;
	int *y = &num2;

	if (*x > *y)
		cout << "First number is greater than second " << endl;
	else if (*x < *y)
		cout << "Second number is greater than first " << endl;
	else
		cout << "Numbers are equal" << endl;

	return 0;
}