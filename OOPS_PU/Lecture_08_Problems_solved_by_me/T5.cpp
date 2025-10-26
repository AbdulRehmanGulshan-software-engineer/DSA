// Removing Green Colour From The Image

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating object for reading data
    ifstream gulshan("scene1.ppm", ios::binary);
    string type, comment;
    int width, height, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;
    // creating buffer memory
    unsigned char *pixels = new unsigned char[width * height * 3];
    gulshan.read((char *)pixels, width * height * 3);
    gulshan.close();

    // removing green color
    for (int i = 1; i < width * height * 3; i += 3)
    {
        pixels[i] = 0;
    }

    // writing file
    ofstream abdul("red_blue.ppm", ios::binary);
    abdul << type << "\n";
    abdul << comment << "\n";
    abdul << width << " " << height << "\n";
    abdul << maxval;
    abdul.write((char *)pixels, width * height * 3);
    abdul.close();
    return 0;
}