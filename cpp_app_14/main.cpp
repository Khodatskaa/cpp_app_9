#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    const int n = 5;
    int sourceArray[n];
    int destinationArray[n];
    int* x = sourceArray;
    int* y = destinationArray;

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < n; i++) 
    {
        sourceArray[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) 
    {
        *(y + n - 1 - i) = *x;
        x++;
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << sourceArray[i] << " ";
    }
    cout << endl;

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}