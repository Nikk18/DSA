// Day 09 - Print All Divisors of a Number
// Problem: Print all divisors of a given number
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "All divisors of the number are: ";
    bool hasDivisor = false;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
            hasDivisor = true;
        }
    }
    if(!hasDivisor)
        cout << "No divisors found";

    return 0;
}
