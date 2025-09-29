#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int height = 1, width = 256;

    // created object of fstream class
    ofstream gulshan("fahad.ppm");

    // writing header
    gulshan << "P3\n";
    gulshan << "# created by Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    for (int j = 0; j < width; j++)
    {
        int R = j;
        int G = 0;
        int B = 0;
        gulshan << R << " " << G << " " << B << " ";
    }

    // closing file
    gulshan.close();
    return 0;
}