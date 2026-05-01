// Day 25 - Set Matrix Zero
// Problem: Set entire row and column to 0 if element is 0
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

    bool row[100] = {0}, col[100] = {0};
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(arr[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(row[i] || col[j])
                arr[i][j] = 0;
    cout << "Updated matrix:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
