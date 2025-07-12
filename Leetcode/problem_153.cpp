/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.
*/
// code here

#include <iostream>

// main function
int main()
{
    int arr[1000]; // initialized with fixed size

    // input size
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // input sorted array
    std::cout << "enter rotated array e.g. (4 6 8 10 1 2) : ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // binary search algorithm
    int start = 0, end = n - 1, mid, ans = arr[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0]) // if element left sorted
            start = mid + 1;    // move right to find minimum

        else
        {
            ans = arr[mid]; // temporarily store,maybe it can answer
            end = mid - 1;  // move left to find minimum
        }
    }

    // print answer
    std::cout << "minimum element : " << ans;
}
