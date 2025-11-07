/*
Write code to store an integer array of size R x C in a two-dimensional integer array of size R x C in column
major order.
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 4;
    int c = 3;
    int arr[4 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // initialized array of 12 size
    int brr[r][c];                                            // 2d array declaration
    // storing into 2d column major order
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            brr[i][j] = arr[j * r + i]; // alternative : brr[j][i] = arr[i*c+j]

    // print 2d array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}