/*
e. Write a program to find the largest and smallest numbers in an array
Input: Array: [10, 25, 3, 7, 100, 50]
Output: Smallest = 3, Largest = 100
*/

#include <iostream>
#include <climits>
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

    // maximum and minimum logic 👇
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    // print output
    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
    return 0;
}