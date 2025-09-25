// Fakhar Stem Lecture 61 part_01

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream class
    ofstream gulshan("hello.txt",ios::app); // constructor will call automatically (1.create a file, 2.open a file(for writing text not on screen bro))
    gulshan << "Hello, My Name Is Abdul Rehman Gulshan\n";
    return 0;
}