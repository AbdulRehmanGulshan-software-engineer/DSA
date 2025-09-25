// Lecture # 77

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    // open the file
    fin.open("zoom.txt");
    // read the file
    char c;
    // fin >> c; // will not comsider space as character
    c = fin.get();
    while (!fin.eof())
    {
        cout << c;
        // fin >> c;
        c = fin.get();
    }
    // close the file
    fin.close();
}