#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int width = 185;
    int height = 148;

    // read in pixels buffer from hello.bin
    ifstream abdul("hello.bin", ios::binary);
    unsigned char *pixels = new unsigned char[width * height];
    abdul.read((char *)pixels, width * height);
    abdul.close();

    // ceating object of ofstream class
    ofstream gulshan("copy_water.pgm", ios::binary);
    gulshan << "P2" << "\n";
    gulshan << "#created by Abdul Rehman Gulshan" << "\n";
    gulshan << width << " " << height << "\n";
    gulshan << 255 << "\n";

    for (int i = 0; i < width * height; i++)
    {
        gulshan << (int)pixels[i] << " ";
        if ((i + 1) % width == 0)
            gulshan << "\n";
    }
    gulshan.close();
    return 0;
}