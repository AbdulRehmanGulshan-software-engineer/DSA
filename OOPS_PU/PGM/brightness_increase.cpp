#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // creating object of ifstream class
    ifstream gulshan("water.pgm");
    string type, comment;
    int width, height, maxval;

    getline(gulshan, type);    // P2
    getline(gulshan, comment); // comment line
    gulshan >> width >> height >> maxval;

    int pixel[height][width]; // adjust size
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
        {
            gulshan >> pixel[i][j];
            pixel[i][j] = min(255, pixel[i][j] + 50);
        }
    gulshan.close();
    // creating new image
    // first create writing class
    ofstream abdul("new_image.pgm");
    abdul << "P2\n";
    abdul << "# Modified By Abdul Rehman Gulshan\n";
    abdul << width << " " << height << "\n";
    abdul << "255\n";

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            abdul << pixel[i][j] << " ";
        abdul << "\n";
    }

    // close file
    abdul.close();
}