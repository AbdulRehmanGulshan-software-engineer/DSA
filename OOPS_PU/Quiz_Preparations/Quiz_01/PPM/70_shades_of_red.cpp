/*
Tumhe agar 70 shades chahiye (n = 70), aur tum chahte ho ke first = 0 aur last = 255 aayen → to tumhe 255 / (n-1) karna hoga.

To koi bhi dimension le sakte ho jiska product = 70 ho.
e.g. 1×70, 7×10, 14×5 … etc.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // dimensions
    int height = 7, width = 10;

    // created object of ofstream class
    ofstream gulshan("bulbulay.ppm");

    // header
    gulshan << "P3\n";
    gulshan << "# Created By Abdul Rehman Gulshan\n";
    gulshan << width << " " << height << "\n";
    gulshan << "255\n";

    double step = 255.0 / 69;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int R = (int)((i * width + j) * step + 0.5);
            int G = 0;
            int B = 0;
            gulshan << R << " " << G << " " << B << " ";
        }
        gulshan << "\n";
    }

    // close file
    gulshan.close();
    return 0;
}