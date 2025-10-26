/*
Task 7: Find kth occurrence of a number in sorted array (use binary search and write efficient
code).
Sample Input: Array = [1,1,2,2,2,2,3,3,4,4,4], Key = 2, k = 3
Sample Output: Index = 4
Explanation: Third occurrence of 2 is at index 4
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

    // input key and k
    int key, k;
    cout << "enter key : ";
    cin >> key;
    cout << "enter k : ";
    cin >> k;

    // binary search technique
    int start = 0, end = size - 1, mid, first = -1, last = -1;
    // find first
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // find last and required (k)
    // again initialize start and end
    // start = 0, end = size - 1;
    // while(start <= end && last-)  😂 is question me to last nikaalne ki zrurat hi nhi

    if (first == -1)
        cout << "Key not found\n";
    else if (first + (k - 1) >= size || arr[first + (k - 1)] != key)
        cout << k << "th occurrence of " << key << " does not exist\n";
    else
        cout << k << "th occurrence of " << key << " is at index " << first + (k - 1) << endl;

    return 0;
}