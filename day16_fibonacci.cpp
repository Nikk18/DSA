// Day 16 - Fibonacci Series
// Problem: Print Fibonacci series up to n terms
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
