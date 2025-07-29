// this code will find transpose to any size matrix
// space complexity = o(n square)
// auxilary space complexity = o(n square) , Reason: As we are using extra space for 2d array

#include <iostream>
#include <vector>

// main function
int main()
{
    // input matrix size
    int rows, cols;
    std::cout << "enter rows's size : ";
    std::cin >> rows;
    std::cout << "enter columns's size : ";
    std::cin >> cols;

    // declare 2d array via vectors
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    // input array
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            std::cout << "enter element " << i * cols + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }

    // print original matrix entered by user
    std::cout << "\t\t" << "Original Matrix " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    // make another array for transpose
    std::vector<std::vector<int>> arr(cols, std::vector<int>(rows));

    // transpose logic
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[j][i] = matrix[i][j];

    // print transpose matrix
    std::cout << "\t\t" << "Matrix Transpose " << std::endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            std::cout << arr[i][j] << "\t";
        std::cout << std::endl;
    }

    return 0;
};
