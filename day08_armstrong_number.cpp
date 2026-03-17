// Day 08 - Armstrong Number
// Problem: Check whether a number is an Armstrong number or not
// Language: C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, original, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;
    original = num;
    int temp = num;
    while(temp != 0)
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while(temp != 0)
    {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if(result == original)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
}
