// Day 20 - Maximum Consecutive Ones
// Problem: Find max number of consecutive 1s
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements (0s and 1s): ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0, maxCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            count++;
        else
            count = 0;
        if(count > maxCount)
            maxCount = count;
    }
    cout << "Maximum consecutive ones: " << maxCount;
    return 0;
}
