/*
Read a PGM file and display the central pixel(s):
▪ If both width and height are odd → display the single central value.
▪ If one dimension is even → display the central two values.
▪ If both dimensions are even → display the central four values.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // reading a file
    // created object of ifstream class
    ifstream gulshan("water.pgm");
    string type, comment;
    int height, width, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> height >> width >> maxval;
    int pixels[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            gulshan >> pixels[i][j];
        }
    }

    if (width % 2 == 1 && height % 2 == 1)
    {
        cout << pixels[height / 2][width / 2];
    }
    else if (width % 2 == 0 && height % 2 == 0)
    {
        cout << pixels[height / 2 - 1][width / 2 - 1] << " " << pixels[height / 2 - 1][width / 2] << " " << pixels[height / 2][width / 2 - 1] << " " << pixels[height / 2][width / 2];
    }
    else if (width % 2 == 0 && height % 2 == 1)
    {
        cout << pixels[height / 2][width / 2 - 1] << " " << pixels[height / 2][width / 2 - 1] << " ";
    }
    else if (width % 2 == 1 && height % 2 == 0)
    {
        cout << pixels[height / 2 - 1][width / 2] << " " << pixels[height / 2][width / 2] << " ";
    }

    return 0;
}