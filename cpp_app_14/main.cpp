#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	if (*ptr1 > *ptr2)
		cout << "First number is greater than second " << endl;
	else if (*ptr1 < *ptr2)
		cout << "Second number is greater than first " << endl;
	else
		cout << "Numbers are equal" << endl;

	return 0;
}