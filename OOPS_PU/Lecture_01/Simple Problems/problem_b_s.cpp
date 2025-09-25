/*
Write a program to determine if a given year is a leap year or not
Input: Enter year: 2024
Output: 2024 is a leap year
*/

#include <iostream>
using namespace std;
int main()
{
    // input year
    int year;
    cout << "Enter The Year : ";
    cin >> year;

    // logic nested if👇
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0)
                cout << year << "is leap year" << endl;
            else
                cout << year << " is not a leap year." << endl;
        else
            cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;
    return 0;
}