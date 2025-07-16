//problem 875. Koko Eating Bananas

#include <iostream>
#include <vector>
#include <cmath>     //for ceil
#include <numeric>   // for accumulate
#include <algorithm> // for max_element

// eating speed function
int minEatingSpeed(std::vector<int> &piles, int size, int h)
{
    // findig sum of all elements
    int sum = std::accumulate(piles.begin(), piles.end(), 0);

    // start and end point
    int start = std::max(1, sum / h);
    int end = *std::max_element(piles.begin(), piles.end());
    int ans ; //worst case

    // binary search technique
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int total = 0;
        for (int i = 0; i < size; i++)
            total += std::ceil((double)piles[i] / mid);
        if (total > h)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

// main function
int main()
{
    // input size
    int size;
    std::cout << "enter array size: ";
    std::cin >> size;

    // vector declaration
    std::vector<int> piles(size);

    // input array
    std::cout << "enter array: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> piles[i];
    }

    // input hours to eat bananas
    int hours;
    std::cout << "enter hours: ";
    std::cin >> hours;
    // calling function
    int ans = minEatingSpeed(piles, size, hours);
    std::cout << "minimum speed is : " << ans << std::endl;
    return 0;
}