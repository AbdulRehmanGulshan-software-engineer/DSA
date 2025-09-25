/*
Task 4: Count how many numbers in an array are even using bitwise AND.
Sample Input: Array = [3, 4, 6, 7, 8]
Sample Output: Count = 3
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

    // input array and count
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
        if (!(arr[i] & 1))
            count++;
    }

    // print result
    cout << "Count = " << count;

    return 0;
}