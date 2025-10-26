/*
read words from words.txt and find the length of largest word without using extra space
*/

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
int main()
{
    // created object of ifstream class
    ifstream gulshan("words.txt");

    int length = INT_MIN;

    char word[100];
    while (gulshan >> word)
    {
        int i = 0;
        while (word[i] != '\0')
            i++;
        if (i > length)
            length = i;
    }

    // output on console
    cout << "Largest Word Length : " << length;
    return 0;
}
