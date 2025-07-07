#include <iostream>
int main()
{
    int size;
    std::cout << "enter array size : ";
    std::cin >> size;
    // int arr[size]; // this is bad habbit , array size should not be variable it should be fixed

    int arr[1000]; // good habbit
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}