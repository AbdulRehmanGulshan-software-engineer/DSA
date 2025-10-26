/*
Task 1: Sort numbers from index i to j using selection sort.
Sample Input: Array = [8, 5, 9, 3, 2], i=1, j=3
Sample Output: Output = [8, 3, 5, 9, 2]
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

    // input range
    int i, j;
    cout << "enter starting point : ";
    cin >> i;
    cout << "enter ending point : ";
    cin >> j;

    // sorting algorithm
    for (int k = i + 1; k <= j; k++)
    {
        for (int l = k; l > i; l--)
        {
            if (arr[l] < arr[l - 1])
                swap(arr[l], arr[l - 1]);
            else
                break;
        }
    }

    // output array
    for (int l = 0; l < size; l++)
        cout << arr[l] << " ";
}