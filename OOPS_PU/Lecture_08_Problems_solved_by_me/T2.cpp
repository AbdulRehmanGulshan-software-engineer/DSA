#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating object for reading file
    ifstream gulshan("output_binary.pgm");
    string type, comment;
    getline(gulshan, type);
    getline(gulshan, comment);
    int width, height, maxval;
    gulshan >> width >> height >> maxval;

    // dynamically declaring array
    unsigned char *pixels = new unsigned char[width * height];
    gulshan.read((char *)pixels, width * height);
    gulshan.close();

    // placing complete 5 lines after each 5 rows using pointer arithmetic
    for (int i = 0; i < height; i += 5)
    {
        unsigned char *row_ptr = pixels + i * width; // pointer ab i-th row ke start pe hai
        for (int j = 0; j < width; j++)
            *(row_ptr + j) = 255; // // pointer arithmetic se column access
    }

    // creating object of ofstream class for writing
    ofstream abdul("white_row.pgm", ios::binary);
    abdul << type << "\n";
    abdul << comment << "\n";
    abdul << width << " " << height << "\n";
    abdul << maxval;
    abdul.write((char *)pixels, width * height);
    abdul.close();
    return 0;
}