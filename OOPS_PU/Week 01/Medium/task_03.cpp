/*
Task 3: For an array containing both negative and positive numbers, sort the array ignoring the
sign of the elements.
Sample Input: [5, -2, -8, 3, -1, 7]
Sample Output: [-1, -2, 3, 5, 7, -8]
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

    // using selection sort algorithm 👇
    int index;
    for (int i = 0; i < size - 1; i++)
    {
        // find smallest index and swap
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (abs(arr[j]) < abs(arr[index]))
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // print result
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}