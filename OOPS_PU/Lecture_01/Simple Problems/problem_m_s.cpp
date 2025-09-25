/*
m. Write a program to shift all negative numbers to one side of an array
Input: Array: [1, -1, 3, -2, -3, 4]
Output: Rearranged Array: [-1, -2, -3, 1, 3, 4]
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

    // using two pointers approach
    int i, j;
    for (i = j = 0; i < n; i++)
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }

    // print output
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";

    return 0;
}