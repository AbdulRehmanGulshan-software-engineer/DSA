#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    // create object for reading file
    ifstream gulshan("water.pgm", ios::binary);
    string type, comment;
    getline(gulshan, type);
    getline(gulshan, comment);
    int width, height, maxval;
    gulshan >> width >> height >> maxval;

    unsigned char *pixels = new unsigned char[height * width];
    gulshan.read((char *)pixels, width * height); // (char*) is liye likha ku ke buffer unsigned char type ka haii
    gulshan.close();

    // print read pixels using pointers arithmetic
    for (int i = 0; i < height * width; i++)
    {
        cout << *pixels << " ";
        pixels++;
        if (i + 1 % width == 0)
            cout << "\n";
    }
    return 0;
}