/*
problem statement : Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
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
    std::cout << "enter sorted distinct array (e.g. 2 4 5 7 9) : ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // input target
    int target;
    std::cout << "enter target : ";
    std::cin >> target;

    // binary search algorithm
    // variable initializations
    int start = 0, end = n - 1, mid, ans = n;
    while (start <= end)
    {
        // calculate mid
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    // print our answer/index
    std::cout << "Index Is : " << ans;
}