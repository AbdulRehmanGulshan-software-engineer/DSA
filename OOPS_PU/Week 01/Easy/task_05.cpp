/*
Task 5: Count how many elements in an array are multiples of 10.
Sample Input: Array = [5, 10, 20, 33, 50]
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

    // input array and count multiples
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] % 10 == 0)
            count++;
    }

    // output result
    cout << "Count = " << count << endl;
    return 0;
}