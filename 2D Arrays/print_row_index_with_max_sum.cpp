#include <iostream>
#include <climits>

// max sum function
void prinT_row_max(int arr[][3], int row, int col)
{
    int index = -1, sum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }
    std::cout << index << std::endl;
}

// main function
int main()
{
    // initialize 2d array
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // function call
    prinT_row_max(arr, 3, 3);
}