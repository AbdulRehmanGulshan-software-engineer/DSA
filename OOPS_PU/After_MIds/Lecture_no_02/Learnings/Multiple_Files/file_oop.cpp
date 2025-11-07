#include <iostream>
#include <fstream>
#include "file_oop.h"
using namespace std;

void writeToFile(const string &filename, const string &data)
{
    ofstream gulshan(filename, ios::app);
    gulshan << data << endl;
    gulshan.close();
}

void readFromFile(const string &filename)
{
    ifstream abdul(filename);
    string line;
    while (getline(abdul, line))
        cout << line << endl;
    abdul.close();
}