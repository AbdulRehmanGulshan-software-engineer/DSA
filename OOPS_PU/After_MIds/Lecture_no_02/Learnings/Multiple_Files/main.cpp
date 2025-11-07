#include <iostream>
#include "file_oop.h"
using namespace std;

int main()
{
    // file name
    string fileName = "data.txt";

    writeToFile(fileName, "Hello I'm Abdul Rehman GUlshan.");
    writeToFile(fileName, "I am future Software Engineer and entrepreneur ,with the help of my Allah.");
    writeToFile(fileName, "I dont just pray for myself,i pray for all others success too.");

    cout << "File Content Here : " << endl;
    readFromFile(fileName);

    return 0;
}