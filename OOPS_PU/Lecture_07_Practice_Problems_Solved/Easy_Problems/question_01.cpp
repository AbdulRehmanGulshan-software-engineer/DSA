/*
Write a program to store a single integer dynamically, assign a
value, print, and delete it
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // dynamic integer
    int *p = new int;

    // assigning a value
    cout << "enter integer : ";
    cin >> *p;

    // print
    cout << "Entered Integer Is : " << *p << endl;

    // free memory
    delete p;
    return 0;
}