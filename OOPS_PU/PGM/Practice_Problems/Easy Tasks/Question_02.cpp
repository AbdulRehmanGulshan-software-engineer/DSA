/*
Write a file words.txt. The first line contains a positive integer N. Read the words from the
file and display them such that each line prints exactly N words. (Assume the total number
of words is a multiple of N.)
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object for writing file
    ofstream gulshan("words.txt");
    int n;
    cout << "Enter Positive Integer N : ";
    cin >> n;
    gulshan << n << "\n";
    // created object for reading file
    ifstream zoha("words1.txt");
    string word;
    // cout length of words
    int count = 0;
    while (zoha >> word)
    {
        cout << word << " ";
        count++;
        if (count == n)
        {
            cout << "\n";
            count = 0;
        }
    }
}