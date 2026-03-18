#include <iostream>
using namespace std;

// function prototype
bool binarySearch(int arr[], int target, int start, int end);

int main()
{
    // input array
    int size, target;
    cout << "enter size of array : ";
    cin >> size;
    int *arr = new int[size];
    cout << "enter array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "enter value to search : ";
    cin >> target;

    int start = 0, end = size - 1;
    // called binary search function
    cout << binarySearch(arr, target, start, end);

    return 0;
}

// defined function
bool binarySearch(int arr[], int target, int start, int end)
{
    // base case
    if (start > end)
        return 0;

    // handles minor problem
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return 1;
    else if (arr[mid] < target)
        return binarySearch(arr, target, mid + 1, end);
    else
        return binarySearch(arr, target, start, mid - 1);
}