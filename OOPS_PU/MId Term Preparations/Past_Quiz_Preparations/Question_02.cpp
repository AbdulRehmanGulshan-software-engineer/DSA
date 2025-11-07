/*
Write code to store the elements of array x in each column of array y. You are not required to display the output.
The expected results are shown in the box for your understanding only. Do not hardcode values; you are required
to use a nested loop.
*/

#include <iostream>
using namespace std;
int main()
{
    // given
    int x[5] = {23, 46, 78, 12, 56};
    int y[5][4];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            y[i][j] = x[i];

    // print 2d array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << y[i][j] << " ";
        cout << endl;
    }
    return 0;
}