// Day 24 - Maximum Subarray
// Problem: Find maximum sum of a contiguous subarray
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
    int maxSum = arr[0], currSum = 0;
    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if(currSum > maxSum)
            maxSum = currSum;
        if(currSum < 0)
            currSum = 0;
    }
    cout << "Maximum subarray sum is: " << maxSum;
    return 0;
}
