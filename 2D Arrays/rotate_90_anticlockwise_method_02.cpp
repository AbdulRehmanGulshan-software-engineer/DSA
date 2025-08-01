// method 02 : transpose + column_wise reverse

#include <bits/stdc++.h>
int main()
{
    // input square matrix size
    int n;
    std::cout << "enter square matrix size : ";
    std::cin >> n;

    // initialize a 2d matrix in stl vector
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    // input elements from user
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "enter element " << i * n + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }

    // print original matrix
    std::cout << "Original Matrix :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    // transposed and column_wise reversed
    // 1: transpose matrix
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            std::swap(matrix[i][j], matrix[j][i]);

    // 2: reverse each column
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
            std::swap(matrix[start++][i], matrix[end--][i]);
    }

    // print matrix
    std::cout << "Rotated 90 AntiClockWise :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
}