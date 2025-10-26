#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // reading file
    ifstream gulshan("output_binary.pgm");
    string type, comment;
    int width, height, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;
    unsigned char *pixels = new unsigned char[width * height];
    gulshan.read((char *)pixels, width * height);
    gulshan.close();

    // put 100 by 100 white box in centre of the image
    for (int i = height / 2 - 50; i < height / 2 + 50; i++)
    {
        unsigned char *pix_ptr = pixels + i * width;
        for (int j = width / 2 - 50; j < width / 2 + 50; j++)
        {
            *(pix_ptr + j) = 255;
        }
    }

    // writing file
    ofstream abdul("white_box.pgm", ios::binary);
    abdul << type << "\n";
    abdul << comment << "\n";
    abdul << width << " " << height << "\n";
    abdul << maxval;
    abdul.write((char *)pixels, width * height);
    abdul.close();
    return 0;
}