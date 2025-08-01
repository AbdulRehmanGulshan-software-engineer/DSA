#include <bits/stdc++.h>

// main function
int main()
{
    // inputted square matrix size
    int n;
    std::cout << "enter square matrix size : ";
    std::cin >> n;

    // initialized a 2d matrix in stl vector
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    // inputted elements from user
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "enter element " << i * n + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }

    // inputted rotations
    int rotations;
    std::cout << "enter rotations : ";
    std::cin >> rotations;

    // printed original matrix
    std::cout << "Original Matrix :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    for (int i = 0; i < rotations; i++)
    {
        // 1: transposed matrix
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                std::swap(matrix[i][j], matrix[j][i]);

        // 2: reversed each column
        for (int i = 0; i < n; i++)
        {
            int start = 0, end = n - 1;
            while (start < end)
                std::swap(matrix[start++][i], matrix[end--][i]);
        }
    }

    // printed matrix
    std::cout << "Rotated 90 AntiClockWise :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
}