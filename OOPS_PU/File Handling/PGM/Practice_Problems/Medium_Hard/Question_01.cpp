/*
In matrix.txt, store the matrix size in the header and fill the file with numbers. Read the
matrix, then compute and print the sum of each row and each column.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object for writing file
    ofstream gulshan("matrix.txt");
    // stored matrix size
    int rows, cols;
    cout << "Enter Matrix Rows : ";
    cin >> rows;
    cout << "Enter Matrix Columns : ";
    cin >> cols;
    gulshan << rows << " " << cols << "\n";

    // input matrix on console
    int matrix[rows][cols];
    cout << "Enter Matrix Elements : ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // write in matrix.txt
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            gulshan << matrix[i][j] << " ";
        }
        gulshan << "\n";
    }

    // closing writing file
    gulshan.close();

    // created object for reading file
    ifstream abdul("matrix.txt");
    // read size;
    int r, c, num;
    abdul >> r >> c;
    // sum of rows
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            abdul >> num;
            sum += num;
        }
        cout << "Sum Of " << i + 1 << "th row : " << sum << endl;
    }
    // close file
    abdul.close();
    // open file
    abdul.open("matrix.txt");
    // read size;
    int numb;
    abdul >> numb >> numb;
    // sum of columns
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            abdul >> numb;
            sum += numb;
        }
        cout << "Sum Of " << i + 1 << "th column : " << sum << endl;
    }
    return 0;
}