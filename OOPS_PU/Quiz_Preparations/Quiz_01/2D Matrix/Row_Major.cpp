/*
Suppose you have a 4×3 array stored in row-major order. What will be the 1D array if the 2D array is:
*/

#include <iostream>
using namespace std;
int main()
{
    // 2d array (4*3)
    int arr[4][3] = {{10, 20, 30},
                     {40, 50, 60},
                     {70, 80, 90},
                     {100, 110, 120}};

    // created 1D Array
    int brr[4 * 3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[i * 3 + j] = arr[i][j];
        }
    }

    // print 1D array
    for (int i = 0; i < 4 * 3; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    return 0;
}