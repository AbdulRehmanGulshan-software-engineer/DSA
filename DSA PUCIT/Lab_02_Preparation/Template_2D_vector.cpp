#include <iostream>
using namespace std;

template <typename T>
class Vector2D
{
    // data members
    T **data;
    int rows, cols;
    int currRow, currCol;

public:
    // constructor
    Vector2D(int r = 0, int c = 0)
    {
        this->rows = r;
        this->cols = c;
        currRow = currCol = 0;

        if (rows > 0 && cols > 0)
        {
            data = new T *[rows];
            for (int i = 0; i < rows; i++)
            {
                data[i] = new T[cols];
                for (int j = 0; j < cols; j++)
                    data[i][j] = 0;
            }
        }
        else
            data = nullptr;
    }

    // copy constructor(deep copy)
    Vector2D(const Vector2D &other)
    {
        rows = other.rows;
        cols = other.cols;
        currRow = other.currRow;
        currCol = other.currCol;

        data = new T *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new T[cols];
            for (int j = 0; j < cols; j++)
                data[i][j] = other.data[i][j];
        }
    }

    // operator() access
    T &operator()(int r, int c)
    {
        return data[r][c];
    }

    // safe access
    T at(int r, int c) const
    {
        if (r < 0 || r >= rows || c < 0 || c >= cols)
        {
            cout << "Index Out Of Range\n";
            exit(0);
        }
        return data[r][c];
    }

    // cursor operations
    void moveNext()
    {
        currCol++;
        if (currCol == cols)
        {
            currCol = 0;
            currRow++;
        }
    }

    bool end() const
    {
        return currRow >= rows;
    }

    T &current()
    {
        return data[currRow][currCol];
    }

    // Insert Row
    void InsertRow(int index)
    {
        // 💭 For insertion in a container of size N: Valid index range = 0 to N
        // 💭 For access (read/write): Valid index range = 0 to N-1

        if (index < 0 || index > rows) // note (index > rows) point here,not index >=rows
            return;

        T **temp = new T *[rows + 1];
        for (int i = 0; i < rows + 1; i++)
            temp[i] = new T[cols];

        for (int i = 0, ti = 0; i < rows + 1; i++)
        {
            if (i == index)
                continue;
            for (int j = 0; j < cols; j++)
                temp[i][j] = data[ti][j];
            ti++;
        }
        freeMemory();
        data = temp;
        rows++;
    }

    // delete row
    void deleteRow(int index)
    {
        if (index < 0 || index >= rows)
            return;

        T **temp = new T *[rows - 1];
        for (int i = 0; i < rows - 1; i++)
            temp[i] = new T[cols];

        for (int i = 0, ti = 0; i < rows; i++)
        {
            if (i == index)
                continue;
            for (int j = 0; j < cols; j++)
                temp[ti][j] = data[i][j];
            ti++;
        }
        freeMemory();
        data = temp;
        rows--;
    }

    // insert column
    void insertColumn(int index)
    {
        if (index < 0 || index > cols)
            return;

        for (int i = 0; i < rows; i++)
        {
            T *temp = new T[cols + 1];

            for (int j = 0, tj = 0; j < cols; j++)
            {
                if (j == index)
                    continue;
                temp[j] = data[i][tj++];
            }
            delete[] data[i];
            data[i] = temp;
        }
        cols++;
    }

    // delete column
    void deleteColumn(int index)
    {
        if (index < 0 || index >= cols)
            return;
        for (int i = 0; i < rows; i++)
        {
            T *temp = new T[cols - 1];
            for (int j = 0, tj = 0; j < cols; j++)
            {
                if (j == index)
                    continue;
                temp[tj++] = data[i][j];
            }
            delete[] data[i];
            data[i] = temp;
        }
        cols--;
    }

    // insert value row wise
    void insertValue(T value)
    {
        if (currRow >= rows)
        {
            cout << "Matrix Full Cannot insert more values." << endl;
            return;
        }
        data[currRow][currCol] = value;
        // move cursor
        currCol++;
        if (currCol == cols)
        {
            currCol = 0;
            currRow++;
        }
    }

    // print
    void print() const
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    // free memory helper
    void freeMemory()
    {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }

    // destructor
    ~Vector2D()
    {
        if (data)
            freeMemory();
    }
};

int main()
{
    Vector2D<int> v(3, 4);
    // auto insert
    for (int i = 0; i < 10; i++)
        v.insertValue(i);
    cout << "after auto insertion: " << endl;
    v.print();

    v(2, 3) = 5;
    cout << "after setting v(2, 3) = 5" << endl;
    v.print();
    return 0;
}