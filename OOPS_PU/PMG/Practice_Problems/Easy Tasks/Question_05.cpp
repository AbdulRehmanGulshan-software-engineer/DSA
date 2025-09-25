/*
 Read a PGM file and increase brightness by adding 128 to every pixel value (clamped at
255). Write the modified image to a new file.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object for reading file
    ifstream gulshan("water.pgm");
    string type, comment;
    int height, width, maxvalue;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> height >> width;
    gulshan >> maxvalue;

    int pixels[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            gulshan >> pixels[i][j];
            pixels[i][j] = min(255, pixels[i][j] + 128);
        }
    }
    gulshan.close();

    // writing file
    ofstream zoha("question_05.pgm");
    zoha << "P2\n";
    zoha << "# Made By Abdul Rehman Gulshan.\n";
    zoha << height << " " << width << "\n";
    zoha << "255\n";
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            zoha << pixels[i][j] << " ";
        zoha << "\n";
    }
    return 0;
}