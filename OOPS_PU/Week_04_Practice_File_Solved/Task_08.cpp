/*
Task 8: From file "nums.txt", read into 4x5 matrix. Create "nums2.txt" and write the same in
column-major order.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ifstream class
    ifstream gulshan("nums.txt");
    // create object of ofstream class
    ofstream abdul("nums2.txt");

    int rows = 4, cols = 5;
    int arr[rows][cols];
    int number;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            gulshan >> number;
            arr[i][j] = number;
        }
    }

    // closing file
    gulshan.close();

    // printing on console for comaparing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // writing same matrix in column major order
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            abdul << arr[i][j] << " ";
        }
        abdul << "\n";
    }

    // closing writing file
    abdul.close();

    return 0;
}