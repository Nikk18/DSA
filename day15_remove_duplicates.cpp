// Day 15 - Remove Duplicates from Sorted Array
// Problem: Remove duplicates from sorted array
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
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
            cout << arr[i] << " ";
    }
    return 0;
}
