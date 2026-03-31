// Day 11 - Count Frequency of Elements
// Problem: Count frequency of each element in array
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100], visited[100] = {0};
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        cout << arr[i] << " appears " << count << " times\n";
    }
    return 0;
}
