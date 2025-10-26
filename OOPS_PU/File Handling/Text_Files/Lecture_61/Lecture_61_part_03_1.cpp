// reading from file using get()---> reads a single character from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char ch;
    // creating ifstream class object for reading files 👇
    ifstream gulshan("zoha.txt");
    while (gulshan) // reads until EOF or error
    {
        gulshan.get(ch); // get is used to read character
        cout << ch;      // display the current character
    }
    cout << endl;
    gulshan.close();
    cout << " File read Successfully.";
    return 0;
}