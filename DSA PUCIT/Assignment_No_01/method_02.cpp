#include <iostream>
// #include <vector>
using namespace std;
class Vector2D
{
    // data members, private by default
    int rows, cols, currRow, currCol, **arr;
    // vector<vector<int>> arr;

public:
    // constructor
    Vector2D(int row, int col) : rows(row), cols(col), currRow(0), currCol(1)
    {
        this->arr = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                arr[i][j] = 0;
        }
    }
    // Vector2D(int row, int col) : rows(row), cols(col), currRow(0), currCol(1), arr(rows, vector<int>(cols, 0))
    // {
    // }

    //  member function insert
    void pushBack(int value)
    {
        if (currRow >= rows)
        {
            cout << "Memory Full" << endl;
            return;
        }
        arr[currRow][currCol] = value;
        currCol += 2;
        if (currCol >= cols)
        {
            currCol = 1;
            currRow += 2;
        }
    };

    // member function display
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    // destructor
    ~Vector2D()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
        // cout << "Destructor Testing" << endl;
    }
};
int main()
{
    Vector2D v(5, 5);
    v.pushBack(5);
    v.pushBack(10);
    v.pushBack(15);
    v.pushBack(20);
    v.pushBack(25);
    v.pushBack(30);
    v.display();
    return 0;
}