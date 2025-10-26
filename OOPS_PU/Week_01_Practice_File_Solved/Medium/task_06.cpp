/*
Task 6: Find kth occurrence of a number in an unsorted array.
Sample Input: Array = [1,2,4,2,1,2,2,3], Key = 2, k = 3
Sample Output: Index = 5
Explanation: Third occurrence of 2 is at index 5
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

    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            count++;
        if (count == k)
            break;
    }

    cout << "Index = " << i << endl;
    return 0;
}