// Geeks for Geeks
// problem : Given a square matrix mat[][] of n*n size, the task is to determine the diagonal pattern which is a linear arrangement of the elements of the matrix as depicted in the following example:
/*
Input:
n = 2
mat[][] = {{1, 2},
           {3, 4}}
Output: {1, 2, 3, 4}
Explanation:
Starting from (0, 0): 1,
Move to the right to (0, 1): 2,
Move diagonally down to (1, 0): 3,
Move to the right to (1, 1): 4
There for the output is {1, 2, 3, 4}.
*/

#include <iostream>

// main function
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

    // printing upper side
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            int j = 0;
            for (int i = count; i >= 0; i--)
            {
                std::cout << arr[i][j] << " ";
                j++;
            }
            count++;
        }
        else if (i % 2 == 1)
        {
            int j = 0;
            for (int i = count; i >= 0; i--)
            {
                std::cout << arr[j][i] << " ";
                j++;
            }
            count++;
        }
    }

    // printing lower side
    int count_n = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            int j = n - 1;
            for (int i = count_n; i < n; i++)
            {
                std::cout << arr[i][j] << " ";
                j--;
            }
            count_n++;
        }
        else if (i % 2 == 1)
        {
            int j = n - 1;
            for (int i = count_n; i < n; i++)
            {
                std::cout << arr[j][i] << " ";
                j--;
            }
            count_n++;
        }
    }
    return 0;
}