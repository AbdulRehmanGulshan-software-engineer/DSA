#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int width = 2, height = 2;
    // created object of ofstream class
    ofstream gulshan("abdul.ppm");

    // writing header
    gulshan << "P3\n";
    gulshan << "# created by Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    // using 3 2D Arrays
    int arr[2][2] = {
        {255, 0},
        {0, 255}};
    int brr[2][2] = {
        {0, 255},
        {0, 255}};
    int crr[2][2] = {
        {0, 0},
        {255, 255}};

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            gulshan << arr[i][j] << " "
                    << brr[i][j] << " "
                    << crr[i][j] << " ";
        }
        gulshan << "\n";
    }

    // close file
    gulshan.close();
    return 0;
}