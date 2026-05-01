// Day 26 - Rotate Image
// Problem: Rotate matrix by 90 degrees clockwise
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int arr[100][100];
    cout << "Enter matrix elements: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n / 2; j++)
            swap(arr[i][j], arr[i][n - j - 1]);
    cout << "Rotated matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
