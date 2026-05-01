// Day 30 - Rearrange Array by Sign
// Problem: Alternate positive and negative numbers
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100], pos[100], neg[100];
    int p = 0, ne = 0;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[ne++] = arr[i];
    }
    int i = 0, j = 0, k = 0;
    while(i < p && j < ne)
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while(i < p)
        arr[k++] = pos[i++];

    while(j < ne)
        arr[k++] = neg[j++];

    cout << "Rearranged array: ";
    for(int x = 0; x < n; x++)
        cout << arr[x] << " ";
    return 0;
}
