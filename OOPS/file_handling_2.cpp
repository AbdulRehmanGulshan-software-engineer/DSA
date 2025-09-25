// Lecture # 77 : File Handling In C++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream abdul;
    abdul.open("z.txt");
    abdul << "Hello Abdul Rehman Gulshan\n";
    abdul << "Welcome You All In AI HUB\n";
    abdul << "Hello Bhai\n";
    abdul.close();

    // for reading
    ifstream rehman;
    rehman.open("z.txt");

    string line;
    while (getline(rehman, line))
        cout << line << endl;
    rehman.close();
}