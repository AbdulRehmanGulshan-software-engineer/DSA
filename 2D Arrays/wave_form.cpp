// adding competitive programming library
#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    // input 2D matrix size
    int rows, cols;
    cout << "enter number of rows : ";
    cin >> rows;
    cout << "enter number of columns : ";
    cin >> cols;

    // initialize 2D vector
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    // input 2d matrix elements
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "enter element " << (i*cols) + j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }

    // wave form
    for (int i = 0; i < cols; i++)
    {
        if (i % 2 == 0) // for up to down
            for (int j = 0; j < rows; j++)
                cout << matrix[j][i] << " ";
        else // for doe=wn to up
            for (int j = rows - 1; j >= 0; j--)
                cout << matrix[j][i] << " ";
    }
    return 0;
};
