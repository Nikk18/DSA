// Day 05
// Problem: Remove Duplicates from Sorted Array
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];   // Array declaration
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++)
    {
        if(i == n-1 || arr[i] != arr[i+1])
            cout << arr[i] << " ";
    }

    return 0; 
}
