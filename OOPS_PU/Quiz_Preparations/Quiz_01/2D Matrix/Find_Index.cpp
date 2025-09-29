/*
Given a 3×4 array, find the 1D index of element A[2][3] (assuming A[0][0] is first element) in both row-major and column-major.
*/

#include <iostream>
using namespace std;
int main()
{
    int rows = 3, cols = 4;
    int row_index = 2, col_index = 3;

    // row-major
    int index_1 = row_index * cols + col_index;
    cout << "Index for row-major : " << index_1 << endl;

    // column-major
    int index_2 = col_index * rows + row_index;
    cout << "Index for column-major : " << index_2 << endl;
    return 0;
}