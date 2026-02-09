#include <iostream>
using namespace std;
int main()
{
    int rows, cols, target;
    cout << "Enter Rows : ";
    cin >> rows;
    cout << "Enter Columns : ";
    cin >> cols;

    // initialize and input
    cout << "Enter Elelemnts :" << endl;
    int **ptr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        ptr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
            cin >> ptr[i][j];
    }

    cout << "Enter Target : ";
    cin >> target;

    bool test = false;
    for (int i = 0; i < rows * cols; i++)
    {
        int row = i / cols;
        int col = i % cols;
        if (ptr[row][col] = target)
            test = true;
    }
    if (test == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}