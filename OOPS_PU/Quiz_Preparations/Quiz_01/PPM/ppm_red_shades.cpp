#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int height = 16, width = 16; // kuke 16*16 = 256   (0-255)

    // created object of ofstream class
    ofstream gulshan("rehman.ppm");

    // ppm file ka header likho bhaii
    gulshan << "P3\n";
    gulshan << "# created by abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    // pixels
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            int index = i * width + j;
            int R = index;
            // int G = 0;
            // int B = 0;
            // gulshan << R << " " << G << "" << B << " ";
            gulshan << R << " " << 0 << " " << 0 << " ";
        }
        gulshan << "\n";
    }
    return 0;
}