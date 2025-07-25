#include <iostream>
#include <algorithm>

// main function
int main()
{
    int matrix[3][4] = {1, 2, 3, 4, // hard code
                        5, 6, 7, 8,
                        9, 10, 11, 12};

    // reverse row solution
    for (int i = 0; i < 3; i++)
    {
        int start = 0, end = 4 - 1;
        while (start < end)
        {
            // swapping start and end
            std::swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }

    // print matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
}