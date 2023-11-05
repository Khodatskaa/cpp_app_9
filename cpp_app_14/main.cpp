#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    const int n = 5;
    int arr[n];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < n; i++) 
    {
        arr[i] = rand() % 100;
    }

    int* x = arr;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++)
    {
        *(x + i) = *(x + i) + *(x + n - 1 - i);
        *(x + n - 1 - i) = *(x + i) - *(x + n - 1 - i);
        *(x + i) = *(x + i) - *(x + n - 1 - i);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
