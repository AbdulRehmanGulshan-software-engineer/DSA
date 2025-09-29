/*
Method 2: 2D Array with 3 values per pixel
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int width = 2, height = 2;
    // created object for writing file
    ofstream gulshan("zoha.ppm");

    // writing header
    gulshan << "P3\n";
    gulshan << "# created by Abdul Rehman Gulshan\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    //  3D array: arr[row][col][RGB]
    int arr[height][width][3] = {
        {{255, 0, 0}, {0, 255, 0}},
        {{0, 0, 255}, {255, 255, 255}}};

    // writing in file
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            gulshan << arr[i][j][0] << " "
                    << arr[i][j][1] << " "
                    << arr[i][j][2] << " ";
        }
        gulshan << "\n";
    }

    // file closing
    gulshan.close();
    return 0;
}