/*
Read a PGM file and write its transpose into another file. Verify the result.
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

    int transpose[width][height];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            transpose[j][i] = pixels[i][j];
        }
    }
    // transpose

    // writing file
    ofstream zoha("question_04_med.pgm");
    zoha << "P2\n";
    zoha << "# Made By Abdul Rehman Gulshan.\n";
    zoha << height << " " << width << "\n";
    zoha << "255\n";
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
            zoha << transpose[i][j] << " ";
        zoha << "\n";
    }
    zoha.close();
    return 0;
}