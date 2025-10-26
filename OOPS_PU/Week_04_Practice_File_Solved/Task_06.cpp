/*
 From file "nums.txt", read elements into a 4x5 matrix. Print in column-major order.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object of ifstream class
    ifstream gulshan("nums.txt");

    int number, rows = 4, cols = 5, row, col;
    int arr[rows][cols];

    for (int i = 0; i < rows * cols; i++)
    {
        row = i / cols; // sirf practice ke liye itna complex ja rha hun
        col = i % cols;

        gulshan >> number;
        arr[row][col] = number;
    }

    // print orignal
    for (int i = 0; i < rows * cols; i++)
    {
        row = i / cols; // sirf practice ke liye itna complex ja rha hun
        col = i % cols;

        cout << arr[row][col] << " ";
        if ((i + 1) % cols == 0)
            cout << "\n";
    }

    cout << "\nColumn Major Order : \n";
    // print column major
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}