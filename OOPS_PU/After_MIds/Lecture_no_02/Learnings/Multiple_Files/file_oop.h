#ifndef FILE_OOP_H
#define FILE_OOP_H

#include <string> // why added this ?? Kyunki humne functions me string type ka use kiya hai 👇
using namespace std;

void writeToFile(const string &filename, const string &data);
void readFromFile(const string &filename);

#endif




// run krne ke liye vs me us folder tk jao then ye commands
// g++ main.cpp file_oop.cpp -o app
// app
