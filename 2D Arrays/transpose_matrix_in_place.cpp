// note : inplace transpose is just possible for square matrix
// auxilary time complexity = o(1)
// space time complexity = o(n)

#include <bits/stdc++.h>

// main function
int main()
{
    // input size
    int n;
    std::cout << "enter square matrix size : ";
    std::cin >> n;

    // initialize vector
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    // input vector
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "enter element " << i * n + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }
    }

    // transpose logic with o(1) time complexity
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            std::swap(matrix[i][j], matrix[j][i]);
    }

    // print vector
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
};