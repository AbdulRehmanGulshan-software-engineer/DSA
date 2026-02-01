#include <bits/stdc++.h>
using namespace std;
class client
{
    // data members
public:
    int rows, cols, count, curIndex, **ptr;
    // constructor
    client(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        this->ptr = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            ptr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                ptr[i][j] = -1;
        }
        count = 0;
        curIndex = 1;
    }
    // member functions
    void insert(int value)
    {
        if (curIndex >= rows * cols)
            return;

        int row = curIndex / this->cols;
        int col = curIndex % this->cols;
        ptr[row][col] = value;
        count++;
        col += 2;
        if (count % (cols / 2) == 0)
        {
            row += 2;
            col = 1;
        }
        curIndex = row * cols + col;
    };
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << ptr[i][j] << " ";
            cout << endl;
        }
    };
};
int main()
{
    int rows, cols;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter Cols: ";
    cin >> cols;
    client gulshan(rows, cols);
    gulshan.insert(2);
    gulshan.insert(4);
    gulshan.insert(2);
    gulshan.insert(4);
    gulshan.insert(2);
    gulshan.insert(4);
    gulshan.insert(2);
    gulshan.insert(4);
    gulshan.insert(2);
    gulshan.insert(4);
    gulshan.display();
    return 0;
}