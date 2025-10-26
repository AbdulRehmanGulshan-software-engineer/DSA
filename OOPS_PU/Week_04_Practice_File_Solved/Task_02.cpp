/*Task 2: From file "words.txt", count how many words have even length.  */

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object of ifstream class
    ifstream gulshan("words.txt");

    int count_even = 0;
    char word[100];

    while (gulshan >> word)
    {
        int i = 0;
        while (word[i] != '\0')
            i++;
        if (i % 2 == 0)
            count_even++;
    }

    // closing file
    gulshan.close();

    // output on console
    cout << "Even Length Words Are : " << count_even;
    return 0;
}