#include <iostream>

// main function
int main()
{
    // initialize first array
    int arr1[3][4] = {2, 3, 4, 5, 0, 1, 2, 3, 1, 2, 6, 4};

    // initialize second array
    int arr2[3][4] = {3, 4, 1, 2, 2, 2, 2, 0, 1, 3, 5, 4};

    // declare third 2d array for sum
    int arr3[3][4];

    // sum ... time complexity = O(rows * columns) ... space complexity = O(roes * columns)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // print sum array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr3[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}