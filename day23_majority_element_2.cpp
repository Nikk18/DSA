// Day 23 - Majority Element II
// Problem: Elements appearing more than n/3 times
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
    cout << "Elements appearing times: ";
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted)
            continue;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n/3)
            cout << arr[i] << " ";
    }
    return 0;
}
