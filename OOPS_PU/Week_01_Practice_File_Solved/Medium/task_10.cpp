/*
Task 10: Implement binary search but return total comparisons made in both successful and
unsuccessful search.
Sample Input: Array = [1,2,3,4,5,6,7,8,9], Search=6
Sample Output: Found at index=5, Comparisons=3
Sample Input: Array = [1,2,3,4,5,6,7,8,9], Search=0
Sample Output: Not Found, Comparisons=4
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

    // input element to search
    int search;
    cout << "enter element to search : ";
    cin >> search;

    // binary search technique
    int start = 0, end = size - 1, count = 0, index = -1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == search)
        {
            index = mid;
            count++;
        }
        else if (arr[mid] < search)
        {
            // move right
            start = mid + 1;
            count += 2;
        }
        else
        {
            // move left
            end = mid - 1;
        }
    }

    
    return 0;
}