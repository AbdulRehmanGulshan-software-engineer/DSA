// 1011. Capacity To Ship Packages Within D Days

// code here
#include <iostream>
#include <climits>
int shipWithinDays(int weights[], int size, int days)
{
    // start and end point
    int start = INT_MIN, end = 0;
    for (int i = 0; i < size; i++)
    {
        start = std::max(start, weights[i]);
        end += weights[i];
    }

    // binary search algorithm
    int mid, ans = -1;
    while (start <= end) // loop break condition
    {
        mid = start + (end - start) / 2;
        // work distribution
        int length = 0, count = 1;
        for (int i = 0; i < size; i++)
        {
            length += weights[i];
            if (length > mid)
            {
                count++;
                length = weights[i];
            }
        }

        // moving conditions
        if (count <= days)
        {
            ans = mid;
            end = mid - 1; // move left
        }
        else
            start = mid + 1; // move right
    }

    // return minimum
    return ans;
}

// main function
int main()
{
    // input array size
    int size;
    std::cout << "enter array size : ";
    std::cin >> size;

    // input array for weights
    int arr[1000]; // initialized by fixed size
    std::cout << "enter array : ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    // days input
    int days;
    std::cout << "enter days : ";
    std::cin >> days;

    //print answer
    std::cout <<  "output : " << shipWithinDays(arr,size,days) <<std::endl;
    return 0;
}