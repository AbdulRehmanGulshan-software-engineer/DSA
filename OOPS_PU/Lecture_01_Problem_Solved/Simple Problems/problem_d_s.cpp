/*
d. Write a program to count even and odd numbers in an array of integers
Input: Array: [1, 2, 3, 4, 5, 6]
Output: Even: 3, Odd: 3
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

    // using modolu function
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    // print output
    cout << "Even : " << even_count << ", Odd : " << odd_count << endl;
    return 0;
}