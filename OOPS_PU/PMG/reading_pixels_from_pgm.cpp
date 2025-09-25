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
            gulshan >> pixel[i][j];

    cout << "centre pixel : " << pixel[height / 2][width / 2] << endl;
}