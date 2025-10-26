#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    // read pixels from water.pgm 👇
    // created object for reading
    ifstream gulshan("water.pgm", ios::binary);
    // first read header
    string type, comment;
    int width, height, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;
    // declared dynamic memory
    unsigned char *pixels = new unsigned char[height * width];

    // gulshan.read((char *)pixels, width * height); //  nhi kr skta esa pgm me text hai sara bhaii
    // Read ASCII pixels as integers and store as bytes
    for (int i = 0; i < width * height; i++)
    {
        int val;
        gulshan >> val;
        pixels[i] = (unsigned char)val; // ye isko as 1 byte store kre ga
    }

    gulshan.close();

    // write pixels to bin file
    // created object for writing files
    ofstream abdul("hello.bin", ios::binary);
    abdul.write((char *)pixels, width * height);
    abdul.close();

    delete[] pixels;
    return 0;
}