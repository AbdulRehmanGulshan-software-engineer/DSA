/*
k. Write a program to print elements at even indices of an array
Input: Array: [10, 20, 30, 40, 50]
Output: Elements at even indices: 10 30 50
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

    // print array even indices
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            cout << arr[i] << " ";

    return 0;
}