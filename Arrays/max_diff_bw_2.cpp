// this problem is solved under time complexity O(N)
#include <iostream>
#include <vector>
#include <climits>

// maximum function
int maximum(std::vector<int> arr)
{
    int diff, max_diff = INT_MIN, max_suffix = INT_MIN, j, n = arr.size();
    for (j = n - 1; j > 0; j--)
    {
        max_suffix = std::max(max_suffix, arr[j]);
        diff = max_suffix - arr[j - 1];
        max_diff = std::max(max_diff, diff);
    }
    return max_diff;
}

// main function
int main()
{
    // size input
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // vector declaration and input
    int i;
    std::vector<int> arr(n);
    std::cout << "enter array : ";
    for (i = 0; i < n; i++)
        std::cin >> arr[i];

    // function call
    std::cout << maximum(arr);
    return 0;
};