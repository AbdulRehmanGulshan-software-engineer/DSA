#include <iostream>
#include <climits>
int main()
{
    // input size
    int size;
    std::cout << "enter size: ";
    std::cin >> size;

    // array initialization
    int arr[1000]; // array size should be fixed,cannot be variable
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter element " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    // first find first largest
    int first_largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first_largest)
            first_largest = arr[i];
    }
    std::cout << "first largest : " << first_largest << std::endl;

    // second largest
    int second_largest = -1; // geeks for geeks requirement
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != first_largest)
            second_largest = std::max(second_largest, arr[i]);
    }
    std::cout << "second largest : " << second_largest << std::endl;
}