// Today we will study character I/O
// reading from file using put()---> write a single character to the file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string str = "Time is great teacher but unfortunately "
                 "it kills all its pupils. Berlioz";
    // created object
    ofstream gulshan("zoha.txt");        // create a file for writing
    for (int j = 0; j < str.size(); j++) // loop for writing each character
    {
        gulshan.put(str[j]); // writing a single character to the file
    }
    gulshan.close();
    cout << "File written successfully.\n";
    return 0;
}