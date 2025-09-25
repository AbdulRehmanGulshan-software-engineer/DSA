// Fakhar Stem Youtube Lecture 60 part 2
// using getline

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int MAX = 100;
    char buffer[MAX];
    // created object of ifstream
    ifstream gulshan("gulshan.txt");
    while (!gulshan.eof()) // read till end of file eof
    {
        gulshan.getline(buffer, MAX);
        cout << buffer << endl;
    }
    return 0;
}




//  string line; getline(gulshan, line)
//  char buffer[MAX]; gulshan.getline(buffer, MAX)  