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
    int k = 0, max = (n * n) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            k++;
            if (k > max)
                break;
            std::swap(matrix[i][j], matrix[n - 1 - i][n - 1 - j]);
        }
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