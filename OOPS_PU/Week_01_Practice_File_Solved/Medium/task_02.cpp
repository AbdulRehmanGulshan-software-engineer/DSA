/*
Task 2: Implement a program that rotates a subarray from index i to j by k positions.
Sample Input: Array = [1, 2, 3, 4, 5, 6], i=1, j=4, k=2
Sample Output: Output = [1, 5, 6, 2, 3, 4]  ⚠️ confusing output (sir se puchna hai)
*/

#include <iostream>
using namespace std;
int main()
{
    // input array size
    int size;
    cout << "enter array size : ";
    cin >> size;

    // declared array
    int arr[size];

    // input array
    for (int i = 0; i < size; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    // input i,j,k
    int i, j, k;
    cout << "enter index i : ";
    cin >> i;
    cout << "enter index j : ";
    cin >> j;
    cout << "enter rotations : ";
    cin >> k;

    // created extra array
    int brr[size];
    for (int i = 0; i < size; i++)
    {
        brr[i] = arr[i];
    }

    // important 👇
    int len = size - i;
    k = k % len; // it will avoid extra rotation

    // k time rotation
    int m;
    for (m = i; m < size - k; m++)
    {
        brr[m + k] = arr[m];
    }

    int l = i;
    for (int j = 0; j < k; j++)
    {
        brr[l++] = arr[m++];
    }

    // print output
    for (int j = 0; j < size; j++)
        cout << brr[j] << " ";
}
