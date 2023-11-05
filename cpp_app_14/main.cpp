#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    const int size = 5;  
    int arr[size];  

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;  
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
