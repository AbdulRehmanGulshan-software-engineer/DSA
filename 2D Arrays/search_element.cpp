#include <iostream>

// main function
int main()
{
    // initialized 2D array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // find element in array
    int x;
    std::cout << "enter elemen to search:";
    std::cin >> x;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            if (arr[i][j] == x)
            {
                std::cout << "element present";
                return 0;
            }
    std::cout << "element not present";
}