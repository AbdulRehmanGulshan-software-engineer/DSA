/*
8 by 8
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int width = 8, height = 8;
    // created object for writing file
    ofstream gulshan("zoha.pgm");
    gulshan << "P2\n";
    gulshan << "# Made By Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << "255\n";
    for (int i = 0; i < (8 * 8); i++)
    {
        if (((i / width) + (i % width) / 8) % 2 == 0)
        {
            if (i % 2 == 0)
                gulshan << 0 << " ";
            else
                gulshan << 255 << " ";
        }
        else
        {
            if (i % 2 == 0)
                gulshan << 255 << " ";
            else
                gulshan << 0 << " ";
        }
        if ((i + 1) % width == 0)
            gulshan << "\n";
    }
    return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int width = 8, height = 8;
    ofstream gulshan("zoha.pgm");

    gulshan << "P2\n";
    gulshan << "# Made By Abdul Rehman Gulshan.\n";
    gulshan << width << " " << height << "\n";
    gulshan << "255\n";

    for (int i = 0; i < width * height; i++)
    {
        int row = i / width;  // coder lec 31 me concept hai iska
        int col = i % width;

        if ((row + col) % 2 == 0)
            gulshan << 255 << " ";
        else
            gulshan << 0 << " ";

        if ((i + 1) % width == 0)
            gulshan << "\n";
    }

    return 0;
}

*/
