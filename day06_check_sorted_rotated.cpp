// Day 06
// Problem: Check if Array is Sorted and Rotated
//C++

#include <iostream>
#include <algorithm>
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
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[(i+1)%n])
            count++;
    }
    if(count <= 1)
    {
        cout << "Array is sorted and rotated.";
    }
    else
    {
        cout << "Array is NOT sorted and rotated.\n";
        sort(arr, arr+n);
        cout << "Example of sorted and rotated array: ";
        for(int i = 1; i < n; i++)
            cout << arr[i] << " ";
        cout << arr[0];
    }
    return 0;
}
