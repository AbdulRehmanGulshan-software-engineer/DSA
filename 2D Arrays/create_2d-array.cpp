#include <iostream>

// print column wise function
void col_wise(int arr[][4], int row, int col) // passing col is necessary
{
    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            std::cout << arr[i][j] << " ";
}

// main function
int main()
{
    // create 2D array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print all the values in array
    for (int row = 0; row < 3; row++)     // for rows
        for (int col = 0; col < 4; col++) // for columns
            std::cout << arr[row][col] << " ";

    std::cout << std::endl;
    // print all the values in arrays column wise
    col_wise(arr, 3, 4);
    return 0;
}
