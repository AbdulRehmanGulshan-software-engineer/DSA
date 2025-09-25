/*
Task 10: Find the second largest element in an array.
Sample Input: Array = [4, 12, 7, 9]
Sample Output: Second Largest = 9
*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // input array size
    int size;
    cout << "enter array size : ";
    cin >> size;

    // declared array
    int arr[size];

    // input array and count multiples
    for (int i = 0; i < size; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // find first largest
    int first = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
            first = arr[i];
    }
    // now find second largest
    int second = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    // print result
    cout << "Second Largest : " << second << endl;
    return 0;
}