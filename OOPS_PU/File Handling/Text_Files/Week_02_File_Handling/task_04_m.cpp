/*
Task 4: Create a new file "word1.txt". From file "words.txt", read words and store words in
proper case.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // created object for class
    ifstream gulshan("words.txt");
    ofstream abdul("word1.txt");
    string word;
    while (getline(gulshan, word))
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 97 && i == 0) // lowercase first char -> uppercase
                word[i] -= 32;
            if (word[i] < 97 && i > 0) // uppercase rest -> lowercase
                word[i] += 32;
            abdul.put(word[i]);
        }
        abdul.put('\n'); // move to next line in output file
    }
    return 0;
}