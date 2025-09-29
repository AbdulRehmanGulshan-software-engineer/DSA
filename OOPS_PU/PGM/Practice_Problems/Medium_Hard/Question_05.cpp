/*
Rotate Image By 90 degree
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream gulshan("water.pgm");

    string type, comment;
    int width, height, maxvalue;

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

    // Step 1: Transpose
    int transpose[width][height];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            transpose[j][i] = pixels[i][j];
        }
    }

    // Step 2: Reverse each row (manual, no STL)
    for (int row = 0; row < height; row++)
    {                                     // width = newHeight
        int left = 0, right = height - 1; // height = newWidth
        while (left < right)
        {
            swap(transpose[row][left], transpose[row][right]);
            left++;
            right--;
        }
    }

    // ✅ Rotated image dimensions
    int newWidth = height;
    int newHeight = width;

    // Write rotated image
    ofstream zoha("question_05_med.pgm");
    zoha << "P2\n";
    zoha << "# Rotated 90 clockwise by Abdul Rehman Gulshan\n";
    zoha << newWidth << " " << newHeight << "\n"; // ✅ correct order
    zoha << maxvalue << "\n";

    for (int i = 0; i < newHeight; i++)
    { // rows
        for (int j = 0; j < newWidth; j++)
        { // cols
            zoha << transpose[i][j] << " ";
        }
        zoha << "\n";
    }
    zoha.close();

    cout << "Rotated image saved to question_05_med.pgm\n";
    return 0;
}
