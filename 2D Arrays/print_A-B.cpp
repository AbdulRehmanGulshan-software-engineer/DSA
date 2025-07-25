// this problem is applicable only for square matrixes
#include <iostream>

// main function
int main()
{
    int matrix1[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrix2[][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix1[i][j] - matrix2[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
};