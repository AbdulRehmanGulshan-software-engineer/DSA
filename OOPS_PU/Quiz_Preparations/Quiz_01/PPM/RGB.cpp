#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int height = 48, width = 16;

    // created object of ofstream class
    ofstream gulshan("faizan.ppm");

    // writing header in ppm file
    gulshan << "P3\n";
    gulshan << "# created by Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << "255\n";

    for (int i = 0; i < 48; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            // int index = i * width + j;
            int index = j * height + i; // column major order
            int R = index;
            int G = 0;
            int B = 0;
            gulshan << R << " " << G << " " << B << " ";
        }
        gulshan << "\n";
        
    }
    return 0;
}