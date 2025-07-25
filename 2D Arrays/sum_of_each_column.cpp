#include <iostream>

// main function
int main()
{
    // initialize array
    int matrix[][4] = {1, 2, 3, 4, // hard code
                       5, 6, 7, 8,
                       9, 10, 11, 12};

    // first loop will iterate 4 times for 4 columns
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        // second loop will go through 0,1,2 in each iteration
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[j][i];
        }
        std::cout << "sum of " << i + 1 << " column = " << sum << std::endl;
    }
    return 0;
};