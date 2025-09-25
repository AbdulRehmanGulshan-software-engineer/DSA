/*
Task 6: Reverse first half of an array using bubble sort.
Sample Input: Array = [1, 2, 3, 4, 5, 6]
Sample Output: Output = [3, 2, 1, 4, 5, 6]
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

    // calculate mid
    int mid = size / 2;
    // try to take smallest index to end
    for (int i = mid - 1; i >= 0; i)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    // print array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}