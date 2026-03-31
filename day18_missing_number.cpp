// Day 18 - Missing Number (Best Approach)
// Problem: Find missing number from 0 to n
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements (from 0 to " << n << "): ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    int missing = total - sum;
    cout << "The missing number is: " << missing;

    return 0;
}
