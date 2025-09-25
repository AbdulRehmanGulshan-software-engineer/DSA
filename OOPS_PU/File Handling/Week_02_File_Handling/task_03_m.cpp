/*
Task 3: From file "words.txt", count total vowels in the file.
Output: 22
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create an object of ifstream class
    ifstream gulshan("words.txt");
    int count = 0;
    char ch;
    // while (gulshan >> ch)
    while (gulshan.get(ch))
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            count++;
    }
    cout << "Output : " << count;
    return 0;
}