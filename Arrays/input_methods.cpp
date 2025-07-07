#include <iostream>
int main()
{
    // initialization method 01
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) // printing arrays
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    // initializing method 02
    int brr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
        std::cout << brr[i] << " ";
    std::cout << std::endl;

    // initialization method 03
    int crr[6] = {1, 2, 3}; // remaining will auto initialize with zero
    for (int i = 0; i < 6; i++)
        std::cout << crr[i] << " ";
    std::cout << std::endl;

    // initialization method 04
    int drr[6] = {0}; // all elements will be zero
    for (int i = 0; i < 6; i++)
        std::cout << drr[i] << " ";
    std::cout << std::endl;

    // initialization method 05
    // input by user
    int err[6]; // declare array named err with size of 6
    for (int i = 0; i < 6; i++)
    {
        std::cout << "enter element " << i + 1 << ": ";
        std::cin >> err[i];
    }
    for (int i = 0; i < 6; i++)
        std::cout << err[i] << " ";
    std::cout << std::endl;

    return 0;
}