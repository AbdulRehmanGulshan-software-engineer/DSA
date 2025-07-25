// this question is for square matrix only
#include <iostream>

// main function
int main()
{
    // initialized matrix
    int matrix[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // total diagonal sum
    // first diagonal
    int first = 0;
    for (int i = 0; i < 3; i++)
        first += matrix[i][i];

    // second diagonal
    int second = 0;
    int i = 0, j = 3 - 1; // here j = col-1
    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }

    // subtracting duplicate middle element in odd case

    int total_sum = 0;
    if (3 % 2 == 1) // if matrix is odd /// (col % 2 == 1)
    {
        // int index = 3 / 3; // = col/3 in general case
        // if (3 % 3 != 0)    // col%3 != 0 in general case
        //     index++;

        int index = 3/2;
        total_sum = first + second - matrix[index][index];
    }
    else
    {
        total_sum = first + second;
    }

    std::cout << "total diagonal sum = " << total_sum;
    return 0;
}