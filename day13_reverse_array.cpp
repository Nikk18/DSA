// Day 13 - Reverse Array
// Problem: Reverse elements of an array
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

    for(int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
