// Day 21 - Two Sum
// Problem: Find two numbers that add up to target
// Language: C++

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    unordered_map<int, int> mp;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter target: ";
    cin >> target;
    for(int i = 0; i < n; i++)
    {
        int complement = target - arr[i];
        if(mp.find(complement) != mp.end())
        {
            cout << "Pair found: " << complement << " + " << arr[i]
                 << " = " << target;
            return 0;
        }
        mp[arr[i]] = i;
    }
    cout << "No pair found";
    return 0;
}
