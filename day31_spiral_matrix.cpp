// Day 31 - Spiral Matrix
// Problem: Print matrix in spiral order
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int arr[100][100];
    cout << "Enter matrix elements: ";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    cout << "Spiral order: ";
    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;
        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;
        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
    return 0;
}
