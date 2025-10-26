/*
a. Write a program to check whether a number is positive, negative, or zero
Input: Enter a number: -5
Output: The number is negative
*/

#include <bits/stdc++.h> // not the standard library
using namespace std;
int main()
{
    // number declaration
    int number;
    // input number
    cout << "Enter The Number : ";
    cin >> number;
    // check positive,negative or zero
    // if else-if approach 👇
    if (number == 0)
        cout << "number is zero" << endl;
    else if (number > 0)
        cout << "number is positive" << endl;
    else
        cout << "number is negative" << endl;
}