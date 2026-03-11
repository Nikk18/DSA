// Day 03
// Problem: Greatest Common Divisor of Two Numbers
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD is: " << a << endl;
    return 0;
}
