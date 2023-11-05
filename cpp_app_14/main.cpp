#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() 
{
    const int n = 5; 
    int arr[n];      

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; 
    }

    int sum = 0;
    int *x = arr; 

    for (int i = 0; i < n; i++) 
    {
        sum += *x; 
        x++;       
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The sum of numbers in the array is: " << sum << endl;

    return 0;
}
