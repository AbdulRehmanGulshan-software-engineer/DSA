/*
Task 9: Rotate full array right by k positions.
Sample Input: Array = [1,2,3,4,5], k=2
Sample Output: Output=[4,5,1,2,3]
*/

#include <iostream>
using namespace std;
// function for reversing
//  step 01 : reverse all
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate_right(int arr[], int size, int times)
{
    times = times % size;
    // step 01 : reverse whole array
    reverse(arr, 0, size - 1);
    // step 02 : reverse first-k
    reverse(arr, 0, times - 1);
    // reverse rest
    reverse(arr, times, size - 1);
}
// print function
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

// main function
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

    // input k
    int k;
    cout << "enter k : ";
    cin >> k;

    // calling rotate_right function
    rotate_right(arr, size, k);

    // calling print function
    print(arr, size);
}