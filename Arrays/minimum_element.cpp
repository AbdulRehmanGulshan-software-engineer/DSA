#include <iostream>
#include <limits.h> //for using in_built INT_MAX

// minimum element function
int min_element(int arr[], int size)
{
    int ans = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < ans)
            ans = arr[i];
    }
    return ans;
}

// main function
int main()
{
    // size from user
    int size;
    std::cout << "enter array size : ";
    std::cin >> size;
    int arr[1000]; // size should not be variable it should be fixed

    //array input
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    // function calling
    std::cout << "minimum element is : " << min_element(arr, size) << std::endl;
    return 0;
}