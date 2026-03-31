// Day 14 - Move Zeroes
// Problem: Move all zeroes to end while maintaining order
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    cout << "Array after moving zeroes: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
