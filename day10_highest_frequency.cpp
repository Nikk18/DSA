// Day 10 - Highest Frequency Element
// Problem: Find element with highest frequency in an array
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
    int maxCount = 0, element;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }
    cout << element << " has the highest frequency of " << maxCount;
    return 0;
}
