#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	int *x = &num1;
	int *y = &num2;

	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;

	cout << "After swapping: " << num1 << " " << num2 << endl;

	return 0;
}