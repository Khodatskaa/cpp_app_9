#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;

	cout << "After swapping: " << num1 << " " << num2 << endl;

	return 0;
}