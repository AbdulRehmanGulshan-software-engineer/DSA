#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object of ofstream class for writing in file
    ofstream gulshan("hello.txt");
    gulshan << 4 << " " << 5 << " " << 7 << " " << 3 << " " << 7 << " " << 6;
}