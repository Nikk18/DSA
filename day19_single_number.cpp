// Day 19 - Single Number
// Problem: Find the element that appears only once
// Language: C++

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    unordered_map<int, int> freq;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for(auto it : freq)
    {
        if(it.second == 1)
        {
            cout << "The single number is: " << it.first;
            return 0;
        }
    }
    cout << "No single element found";
    return 0;
}
