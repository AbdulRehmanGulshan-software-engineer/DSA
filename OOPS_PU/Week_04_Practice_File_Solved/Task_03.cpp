// Task 3: From file "words.txt", count total vowels in the file.

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    // created object of ifstream class
    ifstream gulshan("words.txt");

    int vowel_count = 0;
    char word[100];

    while (gulshan >> word)
    {
        int i = 0;
        while (word[i] != '\0')
        {
            char ch = tolower(word[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel_count++;
            i++;
        }
    }

    // output on console
    cout << "Vowel Counts : " << vowel_count;
}
