#include <iostream>
#include <algorithm>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    // 2d vector initialized with initializer list
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
    };

    // row size
    int row = arr.size();

    // column size
    int col = arr[0].size();

    int largest = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            largest = max(largest, arr[i][j]);
        }
    }
    cout << "largest element = " << largest;
    return 0;
};