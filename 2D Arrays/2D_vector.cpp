#include <iostream>
#include <vector>
using namespace std;

// main function
int main()
{
    // create 2D vector
    vector<vector<int>> matrix(3, vector<int>(4, 1));
    // print the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // count rows
    int rows = matrix.size();
    cout << "rows are " << rows << endl;

    // count columns
    int col = matrix[0].size();
    cout << "columns are : " << col << endl;

    // input size from user and make another vectoir
    int n, m;
    cout << "enter rows: ";
    cin >> n;

    cout << "enter columns:";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m, 1));
    // input arr elements
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    // print elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
};