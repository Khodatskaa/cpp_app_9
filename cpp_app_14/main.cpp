#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    const int n = 5;
    int sourceArray[n];
    int destinationArray[n];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < n; i++) 
    {
        sourceArray[i] = rand() % 100; 
    }

    int *x = sourceArray;
    int *y = destinationArray;

    for (int i = 0; i < n; i++) 
    {
        *y = *x; 
        x++;
        y++;
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << sourceArray[i] << " ";
    }
    cout << endl;

    cout << "Result: ";
    for (int i = 0; i < n; i++) 
    {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}
