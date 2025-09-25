// Lecture # 77

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // File ko open karna
    ofstream fout;
    fout.open("zoom.txt"); // khudse create kr de ga
    // write kr skta hun
    fout << "Hello Abdul Rehman Gulshan";
    // close the file
    fout.close();
}