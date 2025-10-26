// put white columns after every 5 columns

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating object for reading file
    ifstream gulshan("output_binary.pgm", ios::binary);
    string type, comment;
    int width, height, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;
    // creating buffer
    unsigned char *pixels = new unsigned char[width * height];
    gulshan.read((char *)pixels, width * height);
    gulshan.close();

    // white lines after every 5 columns using pointer arithmetic
    for (int i = 0; i < height; i++)
    {
        unsigned char *row_ptr = pixels + i * width;
        for (int j = 0; j < width; j += 5)
        {
            *(row_ptr + j) = 255;
        }
    }

    // writing file
    // creating object for writing class
    ofstream abdul("white_column.pgm", ios::binary);
    abdul << type << "\n";
    abdul << comment << "\n";
    abdul << width << " " << height << "\n";
    abdul << maxval;
    abdul.write((char *)pixels, width * height);
    return 0;
}