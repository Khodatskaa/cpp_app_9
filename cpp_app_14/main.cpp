#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	const int size = 5;
	int arr[size];
	int sum = 0;

	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	cout << "Array elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Sum of array elements: " << sum << endl;

	return 0;
}