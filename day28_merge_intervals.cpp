// Day 28 - Merge Intervals
// Problem: Merge overlapping intervals
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;
    int arr[100][2];
    cout << "Enter intervals (start end): ";
    for(int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j][0] > arr[j + 1][0])
            {
                int temp1 = arr[j][0];
                int temp2 = arr[j][1];

                arr[j][0] = arr[j + 1][0];
                arr[j][1] = arr[j + 1][1];

                arr[j + 1][0] = temp1;
                arr[j + 1][1] = temp2;
            }
        }
    }
    cout << "Merged intervals:\n";
    int start = arr[0][0];
    int end = arr[0][1];
    for(int i = 1; i < n; i++)
    {
        if(arr[i][0] <= end)
        {
            if(arr[i][1] > end)
                end = arr[i][1];
        }
        else
        {
            cout << start << " " << end << endl;
            start = arr[i][0];
            end = arr[i][1];
        }
    }
    cout << start << " " << end;
    return 0;
}
