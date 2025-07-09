#include <iostream>
int main()
{
    // size
    int size;
    std::cout << "enter size: ";
    std::cin >> size;

    // array input
    int arr[1000];
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }
    int temp = arr[size - 1];

    // print orignal arrary
    std::cout << "original array: " << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    // rotate by 1
    for (int i = 0; i < size; i++)
        arr[size - i] = arr[size - (i + 1)];
    arr[0] = temp;

    // print rotated arrary
    std::cout << "\n"<< "rotated array: " << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    return 0;
}