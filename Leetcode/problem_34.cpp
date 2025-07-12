/*Problem: Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
*/

// code here
#include <iostream>
#include <vector>

// main function
int main()
{
    int arr[1000]; // initialized with fixed size

    // input size
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // input sorted array
    std::cout << "enter sorted array (e.g. 2 4 4 4 5 9) : ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // input target
    int target;
    std::cout << "enter target : ";
    std::cin >> target;

    // binary search algorithm

    // finding first location of target
    int start = 0, end = n - 1, mid, first = -1, last = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // finding last location of target
    // again initializing start and end
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // return answer in vector
    std::vector<int> a(2);
    a[0] = first;
    a[1] = end;

    // printing vector
    for (auto i : a)
        std::cout << i << " ";
}
