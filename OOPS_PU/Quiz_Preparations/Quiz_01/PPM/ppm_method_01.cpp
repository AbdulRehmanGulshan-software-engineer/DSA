#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int width = 2;
    int height = 2;

    // created object of ofstream class
    ofstream gulshan("hello.ppm");

    gulshan << "P3\n";
    gulshan << "# Created By Abdul Rehman Gulshan\n";
    gulshan << width << " " << height << "\n";
    gulshan << "255\n";

    // first method bro .. 1D array se
    int arr[width * height * 3] = {
        255, 0, 0,
        0, 255, 0,
        0, 0, 255,
        255, 255, 255};

    // writing in file
    for (int i = 0; i < width * height * 3; i++)
    {
        gulshan << arr[i] << " ";
        if ((i + 1) % 6 == 0)
            gulshan << "\n";
    }

    gulshan.close();
    return 0;
}