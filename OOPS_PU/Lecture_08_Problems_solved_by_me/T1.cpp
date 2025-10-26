#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating object for reading binary file
    ifstream gulshan("output_binary.pgm", ios::binary);
    string type, comment;
    int width, height, maxval;
    getline(gulshan, type);
    getline(gulshan, comment);
    gulshan >> width >> height >> maxval;

    unsigned char *pixels = new unsigned char[width * height];
    gulshan.read((char *)pixels, width * height);
    gulshan.close();

    // creating object for writing file
    ofstream abdul("copy_binary.pgm", ios::binary);
    abdul << type << "\n";
    abdul << comment << "\n";
    abdul << width << " " << height << "\n";
    abdul << maxval;
    abdul.write((char *)pixels, width * height);
    return 0;
}