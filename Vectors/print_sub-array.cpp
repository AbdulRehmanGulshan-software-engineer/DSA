#include <iostream>
#include <vector>

// main function
int main()
{
    // input size
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // vector declaration
    std::vector<int> arr;
    // input vector
    for (int i = 0; i < n; i++)
    {
        std::cout << "enter element " << i + 1 << ": ";
        int x;
        std::cin >> x;
        arr.push_back(x);
    }

    // input sub_array size
    int sub_arr_size;
    std::cout << "enter subarray size : ";
    std::cin >> sub_arr_size;

    // printing subarrays
    std::cout << sub_arr_size << " size subarrays :" << std::endl;
    for (int i = 0; i < n + 1 - sub_arr_size; i++)
    {
        for (int j = i; j < i + sub_arr_size; j++)
        {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
};