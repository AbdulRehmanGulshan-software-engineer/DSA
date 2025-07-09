#include <iostream>
#include <algorithm>

// main function
int main()
{
    // input size
    int size;
    std::cout << "enter size: ";
    std::cin >> size;

    // array initialization
    int arr[1000]; // array size should be fixed,cannot be variable
    for (int i = 0; i < size ; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    // reverse array in place
    int start = 0;
    int end = size - 1;
    while (start < end)
    std::swap(arr[start++], arr[end--]);

    // print array
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}
