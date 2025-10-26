/*
j. Write a program to merge two arrays into a third array
Input: Array1: [1, 3, 5]
Array2: [2, 4, 6]
Output: Merged Array: [1, 3, 5, 2, 4, 6]
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input array 01
    int size1;
    cout << "enter size of first array : ";
    cin >> size1;
    int arr[size1];
    cout << "enter array : ";
    for (int i = 0; i < size1; i++)
        cin >> arr[i];

    // input array 02
    int size2;
    cout << "enter size of second array : ";
    cin >> size2;
    int brr[size2];
    cout << "enter array : ";
    for (int i = 0; i < size2; i++)
        cin >> brr[i];

    // initialized merged array with zero
    int mrr[size1 + size2] = {0};
    int i = 0, j;
    for (i = 0; i < size1; i++)
        mrr[i] = arr[i];
    for (j = 0; i < size1 + size2; i++, j++)
        mrr[i] = brr[j];

    // print array
    cout << "Merged Array : ";
    for (int i = 0; i < size1 + size2; i++)
        cout << mrr[i] << " ";

    return 0;
}