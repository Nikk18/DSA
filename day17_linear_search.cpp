// Day 17 - Linear Search
// Problem: Search element in array
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << key << " found at position " << i;
            return 0;
        }
    }
    cout << key << " not found in array";
    return 0;
}
