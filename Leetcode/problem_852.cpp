/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.
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

    // input mountain array
    std::cout << "enter mountain array (e.g. 2 4 5 7 4 1) : ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // binary search formula
    // initialized variables
    int start = 0, mid, end = n - 1, index = -1;

    // loop break condition
    while (start <= end)
    {
        // mid = start + (end - start)/2;  this formula will give runtime error
        mid = end + (start - end) / 2;

        // peak element
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            index = mid;
            break;
        }

        // move right
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;

        // move left
        else
            end = mid - 1;
    }

    // printed peak index
    std::cout << "peak index : " << index << std::endl;
}