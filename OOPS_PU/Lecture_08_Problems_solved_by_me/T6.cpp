#include <iostream>
#include <fstream>
#include <cstdio>
#include <string.h>
using namespace std;

unsigned char *transform(unsigned char *p, int width, int height)
{
    unsigned char *q = new unsigned char[width * height];
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            q[j * height + height - i - 1] = p[i * width + j];
    return q;
}

int main()
{
    ifstream gulshan("flower.pgm", ios::binary);
    string type, comment;
    char filename[20] = "image", int_char[10];
    int width, height, maxval;

    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;

    unsigned char *pixels = new unsigned char[height * width], *temp;
    gulshan.read((char *)pixels, width * height);
    gulshan.close();

    ofstream abdul;

    for (int k = 1; k <= 20; k++)
    {
        filename[0] = 0;
        strcat(filename, "image");
        sprintf(int_char, "%d", k);
        strcat(filename, int_char);
        strcat(filename, ".pgm");

        abdul.open(filename, ios::binary);
        abdul << type << "\n";
        abdul << comment << "\n";
        abdul << width << " " << height << "\n"; // Don't swap here
        abdul << maxval << "\n";

        temp = transform(pixels, width, height);
        delete[] pixels;
        pixels = temp;

        // SWAP DIMENSIONS FOR NEXT ITERATION
        int temp_dim = width;
        width = height;
        height = temp_dim;

        abdul.write((char *)pixels, width * height);
        abdul.close();
    }

    delete[] pixels;
    return 0;
}