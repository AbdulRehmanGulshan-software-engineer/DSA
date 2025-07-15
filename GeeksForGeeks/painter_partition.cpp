// this problem is similar to book allocation problem just difference in condition that some workers may remain idle

#include <iostream>
#include <climits>

// minimum function
int minimum(int arr[], int size, int k)
{
    // start and end point
    int start = INT_MIN, end = 0;
    for (int i = 0; i < size; i++)
    {
        start = std::max(start, arr[i]);
        end += arr[i];
    }

    // binary search algorithm
    int mid, ans = -1;
    while (start <= end)
    {
        // find minimum
        mid = start + (end - start) / 2;

        // distribution
        int length = 0, count = 1;
        for (int i = 0; i < size; i++)
        {
            length += arr[i];
            if (length > mid)
            {
                count++;
                length = arr[i];
            }
        }

        // movement dicision
        if (count <= k)
        {
            ans = mid;
            end = mid - 1; // move left
        }
        else
            start = mid + 1; // move right
    }
    return ans;
}

// main function
int main()
{
    // input size
    int size;
    std::cout << "enter array size : ";
    std::cin >> size;

    int arr[1000]; // initialized by fixed size

    // input array
    std::cout << "enter array : ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    // input k
    int k;
    std::cout << "enter k : ";
    std::cin >> k;

    std::cout << minimum(arr, size, k) << std::endl;
    return 0;
};