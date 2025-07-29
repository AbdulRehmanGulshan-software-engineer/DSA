// i have done this question in LeetCode manners and requirements so it can feel complex due to vectors

// here is the code 🔻
#include <bits/stdc++.h>

// spiral print function
std::vector<int> spiral_print(std::vector<std::vector<int>> &matrix)
{
    // size of rows
    int rows = matrix.size();
    // size of columns
    int cols = matrix[0].size();

    // initialize left,right,start,bottom
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
    // return matrix in vector
    std::vector<int> ans;

    // spiral print algorithm
    while (top <= bottom && left <= right)
    {
        // print top row from left to right
        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        // print right from top to bottom
        for (int j = top; j <= bottom; j++)
            ans.push_back(matrix[j][right]);
        right--;

        // print bottom row from right to left
        if (top <= bottom)
            for (int k = right; k >= left; k--)
                ans.push_back(matrix[bottom][k]);
        bottom--;

        // print left from bottom to top
        if (left <= right)
            for (int l = bottom; l >= top; l--)
                ans.push_back(matrix[l][left]);
        left++;
    }
    return ans;
}

// main function
int main()
{
    // input rows and columns
    int rows, cols;
    std::cout << "enter rows : ";
    std::cin >> rows;
    std::cout << "enter columns : ";
    std::cin >> cols;

    // initialize 2d array using vectors
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    // input elements from user
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "enter element" << i * cols + j + 1 << " : ";
            std::cin >> matrix[i][j];
        }
    }

    // print original matrix
    std::cout << " your input matrix is " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    // capture the result
    std::vector<int> result = spiral_print(matrix);

    // print the output
    std::cout << "spiral form is : " << std::endl;
    for (int val : result)
        std::cout << val << " ";

    return 0;
};
