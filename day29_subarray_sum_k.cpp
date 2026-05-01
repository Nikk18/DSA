// Day 29 - Subarray Sum Equals K
// Problem: Count subarrays with sum = k
// Language: C++

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter value of k: ";
    cin >> k;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(mp.find(sum - k) != mp.end())
            count += mp[sum - k];

        mp[sum]++;
    }
    cout << "Number of subarrays with sum " << k << " is: " << count;
    return 0;
}
