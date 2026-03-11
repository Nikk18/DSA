// Day 02
// Problem: Palindrome Number
// Language: C++

#include <iostream>
using namespace std;

int main()
{
    int num, original, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(reverse == original)
    {
        cout << "The number is a Palindrome." << endl;
    }
    else
    {
        cout << "The number is NOT a Palindrome." << endl;
    }
    return 0;
}
