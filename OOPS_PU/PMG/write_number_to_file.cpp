#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream class
    ofstream gulshan("numbers.txt");
    for (int i = 1; i <= 5; i++)
        gulshan << i << " ";
    // close the file
    gulshan.close();
}