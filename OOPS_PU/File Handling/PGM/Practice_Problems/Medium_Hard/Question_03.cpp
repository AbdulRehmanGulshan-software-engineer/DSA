/*
Read a PGM file and create a vertically flipped image (top-to-bottom).
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

    // rotating mechanism
    int s_height = 0, e_height = height-1;
    while (s_height < e_height)
    {
        for (int i = 0; i < width; i++)
        {
            swap(pixels[s_height][i], pixels[e_height][i]);
        }
        s_height++;
        e_height--;
    }

    // writing file
    ofstream zoha("question_03_med.pgm");
    zoha << "P2\n";
    zoha << "# Made By Abdul Rehman Gulshan.\n";
    zoha << width << " " << height << "\n";
    zoha << "255\n";
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            zoha << pixels[i][j] << " ";
        zoha << "\n";
    }
    zoha.close();
    return 0;
}