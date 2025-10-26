/*
Task 8: Print all the pairs in the array where the result of bitwise OR (|) is greater than both
elements of the pair.
Sample Input: Array = [7, 2, 5, 1, 8, 3]
Sample Output: (7, 8) (2, 5) (2, 8) (5, 8) (1, 8) (8, 3)   ⚠️ wrong output
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
            int num = arr[i] | arr[j];
            if (num > arr[i] && num > arr[j])
                cout << "(" << arr[i] << ", " << arr[j] << ")";
        }
    }
    return 0;
}