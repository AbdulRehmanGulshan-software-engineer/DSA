/*
i.Write a program to check whether an array is sorted in ascending order
Input: Array: [1, 2, 3, 5, 4]
Output: The array is not sorted in ascending order
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
        cin >> arr[i];

    // check sorted
    bool check = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "The array is not sorted in ascending order" << endl;
            check = 0;
            break;
        }
    }
    if (check)
        cout << "The array is sorted in ascending order" << endl;
    return 0;
}