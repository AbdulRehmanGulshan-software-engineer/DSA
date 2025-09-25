/*
f. Write a program to reverse an array in place without using extra memory
Input: Array: [1, 2, 3, 4, 5]
Output: Reversed Array: [5, 4, 3, 2, 1]
*/

#include <iostream>
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

    // Using Two Pointer Approach 👇
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // print array
    cout << "Reversed Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}