#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

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

    // checking maximum
    int maximum = 0;
    for (int k = 1; k <= n; k++) // subarray from 1 to n
    {
        for (int i = 0; i < n + 1 - k; i++)
        {
            int sum = 0;
            for (int j = i; j < i + k; j++)
            {
                sum += v[j];
            }
            maximum = std::max(maximum, sum);
        }
    }
    std::cout << "maximum subarray sum = " << maximum;
    return 0;
};