// Day 07
// Problem: Find the Duplicate Number
//Language: C++

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
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Duplicate number is: " << arr[i];
                return 0;
            }
        }
    }
    cout << "No duplicate found.";
    return 0;
}
