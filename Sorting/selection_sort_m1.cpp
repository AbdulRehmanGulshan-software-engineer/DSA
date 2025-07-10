#include <iostream>
#include <algorithm>

// main function
int main()
{
    // size input
    int size;
    std::cout << "enter size of array: ";
    std::cin >> size;

    // declaration and user input
    int arr[1000]; // fixed array size , good habbit
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    // printed input array
    std::cout << "input array  ----> ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    // selection sort algorithm
    for (int i = 0; i < size - 1; i++)
    {
        // searched smallest element index for every specific range
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }

        // swapped the searched index in sequence from 0,1,2,3,4
        std::swap(arr[index], arr[i]);
    }

    // printed sorted array
    std::cout << "sorted array ----> ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}