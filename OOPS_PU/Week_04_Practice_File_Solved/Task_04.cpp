/*
Task 4: Create a new file "word1.txt". From file "words.txt", read words and store words in
proper case.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create object of ofstream class
    ofstream gulshan("word1.txt");
    // create object of ifstream class
    ifstream abdul("words.txt");

    char word[100];

    while (abdul >> word)
    {
        string word1 = "";
        int i = 0;
        while (word[i] != '\0')
        {
            if (word[i] >= 'a' && word[i] <= 'z')
                word[i] = word[i] - 32;
            word1 += word[i];
            i++;
        }
        gulshan << word1 << " ";
    }
}