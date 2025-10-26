/*
From file "nums.txt", read first 16 elements into a 4x4 matrix. Print all 3x3 submatrices.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ifstream
    ifstream gulshan("nums.txt");

    int rows = 4, cols = 4, number;
    int arr[rows][cols];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gulshan >> number;
            arr[i][j] = number;
        }
    }

    // close file
    gulshan.close();
    
    // print 4by4
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    // print sub_matrices
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int r = 0; r < 3; r++)
            {
                for (int c = 0; c < 3; c++)
                {
                    cout << arr[r + i][c + j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }

    return 0;
}