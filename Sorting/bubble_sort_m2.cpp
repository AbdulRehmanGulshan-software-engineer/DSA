#include <iostream>

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

    // bubble sort algorithm
    for (int i = size - 2; i >= 0; i--)
    {
        bool swapped = 0; // to check if there is swapping in any round/loop iteration
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    // printed sorted array
    std::cout << "sorted array ----> ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}