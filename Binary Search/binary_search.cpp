#include <iostream>

// binary search function
int binary_search(int arr[], int n, int key)
{
    // start, mid, end
    int mid, start = 0, end = n - 1;
    while (start <= end)
    {
        // find mid
        //mid = (start + end) / 2;  //can be integer overflow error
        mid = start + (end-start)/2;

        // if mid == key
        if (arr[mid] == key)
        {
            std::cout << "got it!" << std::endl;
            std::cout << "sorted index: ";
            return mid;
        }

        // move left if mid < key
        else if (arr[mid] < key)
            start = mid + 1;

        // move right if mid > key
        else
            end = mid - 1;
    }
    return -1;
}

// main function
int main()
{
    // declared array
    int arr[1000]; // array should be of fixed size

    // input size
    int n;
    std::cout << "enter array size : ";
    std::cin >> n;

    // input array
    std::cout << "enter array  (e.g. 1 4 5 6) : ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    // input key
    int key;
    std::cout << "enter key : ";
    std::cin >> key;

    // first sort array
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                std::swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    // binary search function call
    std::cout << binary_search(arr, n, key) << std::endl;
}