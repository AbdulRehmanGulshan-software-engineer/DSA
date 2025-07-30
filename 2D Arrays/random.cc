// random try for print_matrix_in_diagonal geeks for geeks
// my solution was not right but learnings was great
// correct solution is in print_matrix_in_diagonal.cpp file

#include <iostream>
int main()
{
    // size of square matrix
    int n;
    std::cout << "enter size of square matrix : ";
    std::cin >> n;

    // make 2d array
    int arr[n][n];

    // input array
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "enter element " << i * n + j + 1 << " : ";
            std::cin >> arr[i][j];
        }

    // print left part
    int k = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        int r = 0;
        while (r < k)
        {
            std::cout << arr[i][r] << " ";
            r++;
        }
        k--;
    }

    // print secondary diagonal
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << arr[i][j++] << " ";
    }

    // print right part
    int r = n - 1;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        while (r < n)
        {
            std::cout << arr[i][r] << " ";
            r++;
        }
        r = r - i - 1;
    }
    return 0;
}