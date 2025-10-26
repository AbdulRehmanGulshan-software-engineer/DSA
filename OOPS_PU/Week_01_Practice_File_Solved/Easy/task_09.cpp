/*
Task 9: Print all pairs of elements from the array where the first element is exactly half of the
second element.
Sample Input: Array = [2, 4, 6, 8, 12, 16]
Sample Output: (2, 4) (4, 8) (6, 12) (8, 16)
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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j] / 2)
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
    }
    return 0;
}