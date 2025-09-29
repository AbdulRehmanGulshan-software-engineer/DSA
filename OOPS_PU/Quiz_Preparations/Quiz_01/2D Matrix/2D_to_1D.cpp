/*
Convert the following 2×3 matrix into 1D array using row-major and column-major order
*/

#include <iostream>
using namespace std;
int main()
{
    // given 2D Array in hard code
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // print 2d matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // converted into 1D using row major
    // declared 1d array of size 2*3
    int brr[2 * 3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[i * 3 + j] = arr[i][j];
        }
    }
    // print row major in 1D
    cout << "1D Row Major Index : ";
    for (int i = 0; i < 2 * 3; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    // converted into 1D array using column major
    // declared 1d array of size 2*3;
    int crr[2 * 3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            crr[j * 2 + i] = arr[i][j];
        }
    }
    cout << "1D Column Major Index : ";
    // print column major order
    for (int i = 0; i < 6; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
    return 0;
}