#include <iostream>
void print_sum_diagonal(int matrix[][4], int row, int col)
{
    int first = 0, second = 0;
    // first diagonal
    for (int i = 0; i < row; i++)
        first += matrix[i][i];

    // second diagonal
    int i = 0, j = col - 1;
    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }

    // print first diagonal
    std::cout << "First diagonal sum = " << first << std::endl;
    // print second diagonal sum
    std::cout << "second diagonal sum = " << second << std::endl;
}

// main function
int main()
{
    int matrix[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // calling print diagonal sum function
    print_sum_diagonal(matrix, 4, 4);
    return 0;
}