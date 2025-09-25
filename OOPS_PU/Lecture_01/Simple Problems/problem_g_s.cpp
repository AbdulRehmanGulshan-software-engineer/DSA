/*
g. Write a program to find the frequency of a user-given number in an array
Input: Array: [2, 3, 4, 2, 2, 5, 3]
Number to search: 2
Output: Frequency of 2 = 3
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input array
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // input number to search
    int number;
    cout << "enter number to search : ";
    cin >> number;

    // frequency logic brute force approach 👇
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
            count++;
    }

    // output
    cout << "Frequency Of " << number << " : " << count;
    return 0;
}