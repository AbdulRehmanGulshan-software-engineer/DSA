/*
l. Write a program to find the second largest element in an array
Input: Array: [12, 35, 1, 10, 34, 1]
Output: Second Largest = 34
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
        cin >> arr[i];

    // first find first largest
    int first_largest = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > first_largest)
            first_largest = arr[i];

    // then find second largest
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > second_largest && arr[i] != first_largest)
            second_largest = arr[i];

    // print output
    cout << "second largest : " << second_largest << endl;
    return 0;
}
