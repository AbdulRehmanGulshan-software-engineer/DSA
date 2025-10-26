/*
Read a PGM file and write its transpose into another file. Verify the result.
180 rotation
*/

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // created object for reading file
    ifstream gulshan("water.pgm");
    string type, comment;
    int height, width, maxvalue;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height;
    gulshan >> maxvalue;
    int pixels[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            gulshan >> pixels[i][j];
        }
    }
    gulshan.close();

    int rotate_180[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            rotate_180[height - 1 - i][width - 1 - j] = pixels[i][j];
        }
    }
    // transpose

    // writing file
    ofstream zoha("question_06_med.pgm");
    zoha << "P2\n";
    zoha << "# Made By Abdul Rehman Gulshan.\n";
    zoha << width << " " << height << "\n";
    zoha << "255\n";
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            zoha << rotate_180[i][j] << " ";
        zoha << "\n";
    }
    zoha.close();
    return 0;
}