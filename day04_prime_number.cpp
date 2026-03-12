// Day 04
// Problem: Check for Prime Number
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> number;

    if(number <= 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime)
        cout << "The number is Prime." << endl;
    else
        cout << "The number is NOT Prime." << endl;
    return 0;
}
