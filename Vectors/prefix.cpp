#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

// divide function
bool divide(std::vector<int> arr) // passed by value
{
    int prefix = 0, n = arr.size();

    // total sum
    int total_sum = 0, i, j;
    for (i = 0; i < n; i++)
        total_sum += arr[i];

    for (j = 0; j < n - 1; j++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix;
        if (total_sum == 2 * prefix)
            return 1;
    }
    return 0;
}

// main function
int main()
{
    // input size
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // vector declaration and input
    std::vector<int> v(n);
    std::cout << "enter array elements : ";
    for (int i = 0; i < n; i++)
        std::cin >> v[i];

    // function call
    std::cout << divide(v);
    return 0;
};