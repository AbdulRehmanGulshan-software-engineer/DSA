// problem : Row with max 1s
// time complexity is O(n + m),where n means rows and m means columns
#include <bits/stdc++.h>

// max 1's in row function
int rowWithMax1s(std::vector<std::vector<int>> arr)
{
    // size of matrix
    int rows = arr.size();
    int cols = arr[0].size();

    // best case
    int count_1 = 0;
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][cols - 1] == 0)
            count_1++;
        if (count_1 == rows)
            return -1;
    }

    // normal case
    int i = 0, j = 0, check = cols, index, count = 0, last_check = 0;
    while (i < rows)
    {
        if (j < cols && arr[i][j] == 0)
        {
            count++;
            j++;
        }
        else
        {
            if (count < check && last_check != check && check != 0)
            {
                index = i;
                last_check = check;
                check = count;
            }
            i++;
            j = 0;
            count = 0;
        }
    }
    return index;
}

// main function
int main()
{
    // inputted size
    int rows, cols;
    std::cout << "enter number of rows : ";
    std::cin >> rows;
    std::cout << "enter number of columns : ";
    std::cin >> cols;

    // declared 2d array
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    // inputted matrix
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            std::cout << "enter element " << i * cols + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }

    // function called
    std::cout << "row index with max 1's : " << rowWithMax1s(matrix);
    return 0;
};