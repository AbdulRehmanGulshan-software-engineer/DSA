/*
h. Write a program to calculate the average of elements in an array
Input: Array: [5, 10, 15, 20]
Output: Average = 12.5
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

    // average concept manually
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    float average = sum / n;

    // print output
    cout << "Average = " << average << endl;
    return 0;
}