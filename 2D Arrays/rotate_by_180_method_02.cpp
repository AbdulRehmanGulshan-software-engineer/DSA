// this method for rotating matrix 180 uses the approach reverse columns then reverse rows
// time complexity = o(n square)
// auxilary space complexity = o(1)

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

    // printed original matrix
    std::cout << "Original Matrix Is :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    // rotated by 180 logic

    // 1: reversed each column
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
            std::swap(matrix[start++][j], matrix[end--][j]);
    }

    // 2: reversed each row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
            std::swap(matrix[i][start++], matrix[i][end--]);
    }

    // printed rotated 180 matrix
    std::cout << "Rotated Matrix By 180 Degree Is :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
};
