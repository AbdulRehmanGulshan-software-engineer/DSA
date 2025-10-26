/*
Read a file nums.txt. The first number in the file is a positive integer K. Read the K-th
number from the file and print its square. (Assume the file has more than K integers.)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // read first positive number
    int k, i, number;
    // created object of ifstream
    ifstream gulshan("hello.txt");
    gulshan >> k;
    // cout << k << endl;
    for (i = 0; i < k; i++)
        gulshan >> number;
    cout << "K-th Number : " << number << endl;
    return 0;
}