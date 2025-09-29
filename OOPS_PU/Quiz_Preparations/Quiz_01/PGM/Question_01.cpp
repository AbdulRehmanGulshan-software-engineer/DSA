/*
    50 shades of gray
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int shades = 50;
    int width = 10;
    int height = (shades + width - 1) / width;

    // 1d array for 50 shades
    int pixels[50];
    for (int i = 0; i < 50; i++)
    {
        pixels[i] = i * (255 / shades);
    }

    // create pgm file
    // created object for writing into file
    ofstream gulshan("hello.pgm");
    gulshan << "P2\n";
    gulshan << "# made by Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    // write values row major order
    for (int i = 0; i < shades; i++)
    {
        gulshan << pixels[i] << " ";
        if ((i + 1) % width == 0)
            gulshan << "\n";
    }

    gulshan.close();

    return 0;
}

/*
Category 2: File Handling + Arrays

Ek PGM file banao jo 8×8 checkerboard (black & white squares alternate) show kare.
Hint: Black = 0, White = 255

Ek PGM file banao jo gradient image ho: left se right tak pixels ka value gradually 0 se 255 tak badhta ho.

Ek PGM file banao jo ek 10×10 image banaye aur usme diagonal pixels 255 (white) ho aur baaki sab 0 (black).
*/