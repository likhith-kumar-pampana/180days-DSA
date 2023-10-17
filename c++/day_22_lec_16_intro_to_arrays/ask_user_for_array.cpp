#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];   // declaring an array
    for(int i =0; i<size; i++)
    {
        cout << "Enter the element " << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

    // use size0f() function to get the no of bytes array consumes
    




}